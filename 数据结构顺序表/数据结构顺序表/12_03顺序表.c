#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//����һ���������飬����ǡ����������ֻ����һ�Σ����඼�������Σ��ҳ�������ֻ������һ�ε�����
int *singleNumber(int* nums, int numsSize,int *returnSize){
	int ret = 0; int tmp = numsSize;
	while (tmp){
		ret ^= nums[tmp - 1];
		tmp--;
	}

/////////////////////////////////�˶�Ϊ����һ���Ĳ�֮ͬ��//////////////////////////
	//�ҳ�ret��mλΪ1��λ
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
	//����
	int x1 = 0; int x2 = 0;
	for (int i = 0; i < numsSize; i++){
		if (nums[i] & (1 << m)){      //�����һ�����飬ֻ��һ������
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

//��������
int* singleNumber_2(int *nums, int numsSize, int*returnSize){
	int ret = 0;
	for (int i = 0; i < numsSize; i++){
		ret ^= nums[i];
	}
////////////////////////////////�˶�Ϊ����һ���Ĳ�֮ͬ��///////////////////
	int tmp = ret&(-ret);    //�ص����������  0010  Ŀ�����ҳ�1��λ��

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
//	//int *retArr=singleNumber(arr, numsSize,&returnSize);    //����һ
//	int *retArr = singleNumber_2(arr, numsSize, &returnSize);
//	for (int i = 0; i < returnSize; i++){
//		printf("%d\n", retArr[i]);
//	}
//	free(retArr);
//	system("pause");
//	return 0;
//}



//ԭ���Ƴ�����������Ԫ��val,Ҫ��ʱ�临�Ӷ�o(N),�ռ临�Ӷ�0(1)
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

//ɾ�������������ظ���
//����һ��˫ָ�뷨
int remove_SameVal(int *nums,int numsSize){
	if (numsSize == 0){
		return 0;
	}
	int *p1 = nums;    //���ߣ�int p1=0 
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

//����+����   �����ڴ���;

int *addToArrayForm(int *Arr, int ASize, int K, int *returnSize){
	//����K��λ��
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
	//���Ĳ��ֿ�ʼ��
	int Ai = ASize - 1;
	int nextnum = 0;
	int ret_i = 0;
	while (len--){
		int a = 0;
		if (Ai >= 0){
			a = Arr[Ai];  //����Ҫ��������Խ�������������λ��С��K��λ��
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

	//����
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