#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//给定一个整数数组，其中恰好有两个数只出现一次；其余都出现两次，找出这两个只出现了一次的数；
int *singleNumber(int* nums, int numsSize,int *returnSize){
	int ret = 0; int tmp = numsSize;
	while (tmp){
		ret ^= nums[tmp - 1];
		tmp--;
	}

/////////////////////////////////此段为方法一二的不同之处//////////////////////////
	//找出ret第m位为1的位
	int m = 0;
	while (m<32){
		if (ret&(1 << m)){
			break;
		}
		else{
			m++;
		}
	}
//////////////////////////////////////////////////////////////////////////////////////
	//分离
	int x1 = 0; int x2 = 0;
	for (int i = 0; i < numsSize; i++){
		if (nums[i] & (1 << m)){      //分离出一个数组，只有一个单身狗
			x1 = x1^nums[i];
		}
		else{
			x2 ^= nums[i];
		}
	}
	int *retArr = (int*)malloc(sizeof(int) * 2);
	retArr[0] = x1;
	retArr[1] = x2;
	*returnSize = 2;
	return retArr;

}

//方法二：
int* singleNumber_2(int *nums, int numsSize, int*returnSize){
	int ret = 0;
	for (int i = 0; i < numsSize; i++){
		ret ^= nums[i];
	}
////////////////////////////////此段为方法一二的不同之处///////////////////
	int tmp = ret&(-ret);    //重点是这个技巧  0010  目的是找出1的位；

///////////////////////////////////////////////////////////////////////
	int x1 = 0; int x2 = 0;
	for (int i = 0; i < numsSize; i++){
		if (nums[i] & tmp){
			x1 = x1^nums[i];
		}
		else{
			x2 ^= nums[i];
		}
	}
	*returnSize = 2;
	int *retArr = (int*)malloc(sizeof(int) * 2);
	retArr[0] = x1;
	retArr[1] = x2; 
	return retArr;
}

//int main(){
//	int arr[] = { 5, 1, 2, 3, 2, 1 };  //3,5
//	int numsSize = 6;
//	int returnSize = 0;
//	//int *retArr=singleNumber(arr, numsSize,&returnSize);    //方法一
//	int *retArr = singleNumber_2(arr, numsSize, &returnSize);
//	for (int i = 0; i < returnSize; i++){
//		printf("%d\n", retArr[i]);
//	}
//	free(retArr);
//	system("pause");
//	return 0;
//}



//原地移除数组中所有元素val,要求时间复杂度o(N),空间复杂度0(1)
int remove_Val(int *nums, int numsSize, int val){
	int index = 0;
	int index_1 = 0;
	while (numsSize){
		if (nums[index] !=val){
			nums[index_1] = nums[index];
			index_1++;
			index++;
		}
		else{
			index++;
		}
		numsSize--;
	}
	return index_1;
}
//int main(){
//	int arr[] = { 3, 2, 3, 4, 3 };
//	int ret = remove_Val(arr, 5, 3);
//	for (int i = 0; i < ret; i++){
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//删除排序数组中重复项
//方法一：双指针法
int remove_SameVal(int *nums,int numsSize){
	if (numsSize == 0){
		return 0;
	}
	int *p1 = nums;    //或者：int p1=0 
	int *p2 = nums + 1;
	int count = 1;
	for (int i = 1; i < numsSize; i++){
		if (*p1 !=*p2 ){
			p1++;
			*p1 = *p2;
			count++;
		}
		p2++;
	}
	return count;
}
//int main(){
//	int arr[] = { 1, 1, 3, 3, 3, 5, 6, 6 };
//	int ret = remove_SameVal(arr, 8);
//	for (int i = 0; i < ret; i++){
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//数组+整数   适用于大数;

int *addToArrayForm(int *Arr, int ASize, int K, int *returnSize){
	//先求K的位数
	int KSize = 0;
	int Ktmp = K;
	while (Ktmp){
		Ktmp /= 10;
		KSize++;
	}
	//malloc
	int len = ASize > KSize ? ASize : KSize;
    len = len + 1;
	int *retArr = (int *)malloc(sizeof(int)*len);
	//核心部分开始；
	int Ai = ASize - 1;
	int nextnum = 0;
	int ret_i = 0;
	while (len--){
		int a = 0;
		if (Ai >= 0){
			a = Arr[Ai];  //这里要考虑数组越界的情况，数组的位数小于K的位数
			Ai--;
		}
		int ret = a + K % 10 + nextnum;
		K /= 10;

		if (ret > 9){
			ret = ret - 10;
			nextnum = 1;
		}
		else{
			nextnum = 0;
		}
		retArr[ret_i] = ret;
		ret_i++;
	}

	//逆置
	int left = 0; int right = ret_i - 1;
	while (left < right){
		int tmp = retArr[left];
		retArr[left] = retArr[right];
		retArr[right] = tmp;
		left++;
		right--;
	}
	*returnSize = ret_i;
	return retArr;
}
//int main(){
//	int arr[] = { 9, 9, 9 }; int K = 1;
//	int ASize = sizeof(arr) / sizeof(arr[0]);
//	int returnSize = 0;
//	int *retArr = addToArrayForm(arr, ASize, K, &returnSize);
//	for (int i = 0; i < returnSize; i++){
//		printf("%d ", retArr[i]);
//	}
//	system("pause");
//	return 0;
//}