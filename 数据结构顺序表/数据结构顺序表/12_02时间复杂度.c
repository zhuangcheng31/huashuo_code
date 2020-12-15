#include<stdio.h>
#include<malloc.h>
#include<windows.h>
//返回中间索引，左右和相等
int pivotIndex(int *nums, int numsSize){
	int leftsum = nums[0]; int i = 0;
	int sum = 0; int tmp = numsSize;
	while (numsSize){   //先求数组总和
		sum += nums[numsSize - 1];
		numsSize--;
	}
	for ( i = 1; i < tmp; i++){
		if (sum==2*leftsum+nums[i]){
			break;
		}
		leftsum += nums[i];   //这个注意不要遗忘；
	}
	return i;
}
//int main(){
//	int arr[] = { 1, 7, 3, 6, 5, 6 };
//	int ret=pivotIndex(arr, 6);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//斐波那契
long long* Fibonacci(size_t n)
{
	if (n == 0)
		return NULL;
	long long * fibArray =(long long *)malloc((n + 1) * sizeof(long long));
	fibArray[0] = 0;
	if (n == 0){ 
		return fibArray;
	}
	fibArray[1] = 1; 
	for (size_t i = 2; i <= n; ++i)
	{
		fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
	}
	return fibArray;
}
//int main(){ 
//	long long *p = Fibonacci(0);
//	//printf("%d\n",p[3] );  //1 1 2 3 5
//	for (int i = 0; i < 5; ++i){
//		printf("%11d ", p[i]);
//	}
//	printf("\n");
//	free(p);
//	system("pause");
//	return 0;
//}

//题目描述：    寻找缺失的数
//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
//输入：[3, 0, 1]  0 1 2 3   （1+3）*3/2==6   6-4==2  
//输出：2
//输入：[9, 6, 4, 2, 3, 5, 7, 0, 1]
//输出：8

//方法一 ：抑或
int FindInt(int *nums, int numsSize){
	int i = 0; int tmp = numsSize;
		while (numsSize){
			if (nums[numsSize-1] ^ i){  //数组从后向前依次和0，1，2，3....抑或；一旦抑或是0 说明这个数没有
				numsSize--;					//缺失，这时立马i++,并且让numsSize回到初始值；继续抑或
									  //直到数组里的数和i抑或完了，那么此时i的值就是缺失的值
				
			}
			else{
				i++;
				numsSize = tmp;
			}
		}
		return i;
}
//int main(){
//	int arr[] = { 0,1, 2, 3,4 };
//	int ret=FindInt(arr, 5);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//方法二：相减；
int FindInt2(int *nums, int numsSize){
	int total = (0 + numsSize)*(numsSize + 1) / 2;   //因为少一项所以项数是numsSize+1;
	int total_1 = 0;
	for (int i = 0; i < numsSize; i++){
		total_1 += nums[i];
	}
	int ret = total - total_1;
	return ret;
}
////int main(){
//	int arr[] = { 0,1, 2, 3,4 };
//	int ret=FindInt(arr, 5);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//搜索插入位置：给定一个排序数组和一个目标值，在数组中找到目标值，并返回索引；
//如果目标值不在数组中，返回它将会被按顺序插入的位置
//方法一：二分法 (left,right)
void search_Pos(int *nums,int*target,int *left,int *right){
	while (*left <= *right){
		int middle = (*left + *right) / 2;
		if (nums[middle] < *target){
			*left = middle + 1;
		}
		else if(nums[middle]>*target){
			*right = middle - 1;
		}
		else{
			printf("找到了，索引是：%d ", middle);
			break;
		}
	}
	if (*left > *right){
		printf("没找到，插入索引：%d\n", left);      //重点在这
	}
}
//int main(){
//	int arr[] = { 1, 3, 5, 6 };
//	int target = 5;
//	int left = 0, right = (sizeof(arr) / sizeof(arr[0]))-1;
//	search_Pos(arr, &target, &left, &right);
//	system("pause");
//	return 0;
//}





