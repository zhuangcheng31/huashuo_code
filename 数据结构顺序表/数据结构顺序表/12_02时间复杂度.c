#include<stdio.h>
#include<malloc.h>
#include<windows.h>
//�����м����������Һ����
int pivotIndex(int *nums, int numsSize){
	int leftsum = nums[0]; int i = 0;
	int sum = 0; int tmp = numsSize;
	while (numsSize){   //���������ܺ�
		sum += nums[numsSize - 1];
		numsSize--;
	}
	for ( i = 1; i < tmp; i++){
		if (sum==2*leftsum+nums[i]){
			break;
		}
		leftsum += nums[i];   //���ע�ⲻҪ������
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


//쳲�����
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

//��Ŀ������    Ѱ��ȱʧ����
//����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������
//���룺[3, 0, 1]  0 1 2 3   ��1+3��*3/2==6   6-4==2  
//�����2
//���룺[9, 6, 4, 2, 3, 5, 7, 0, 1]
//�����8

//����һ ���ֻ�
int FindInt(int *nums, int numsSize){
	int i = 0; int tmp = numsSize;
		while (numsSize){
			if (nums[numsSize-1] ^ i){  //����Ӻ���ǰ���κ�0��1��2��3....�ֻ�һ���ֻ���0 ˵�������û��
				numsSize--;					//ȱʧ����ʱ����i++,������numsSize�ص���ʼֵ�������ֻ�
									  //ֱ�������������i�ֻ����ˣ���ô��ʱi��ֵ����ȱʧ��ֵ
				
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

//�������������
int FindInt2(int *nums, int numsSize){
	int total = (0 + numsSize)*(numsSize + 1) / 2;   //��Ϊ��һ������������numsSize+1;
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

//��������λ�ã�����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ��������������
//���Ŀ��ֵ���������У����������ᱻ��˳������λ��
//����һ�����ַ� (left,right)
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
			printf("�ҵ��ˣ������ǣ�%d ", middle);
			break;
		}
	}
	if (*left > *right){
		printf("û�ҵ�������������%d\n", left);      //�ص�����
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





