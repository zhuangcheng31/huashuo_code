#include<stdio.h>
//ð������
//int main(){
//	int arr[] = { 9, 5, 1, 6, 8, 3, 4, 2, 7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < size-1; i++){
//		for (int j=0; j < size - 1 - i; j++){
//			if (arr[j] > arr[j + 1]){
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for ( int i = 0; i < size; i++){
//		printf("%d ",arr[i]);
//	}
//	system("pause");
//	return 0;
//}



//ʱ�临�Ӷȣ�
//Ԫ������:o(n)
//Ԫ������o(n)--o(n^2)
//void bubblesort(int *a, int n){
//	for (int i = 0; i < n - 1; i++){
//		//flag:һ��ð�������У��Ƿ���Ԫ�ؽ���
//		int flag = 0;
//		for (int j = 0; j < n - 1 - i; j++){
//			if (a[j]>a[j + 1]){
//				flag = 1;
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//		//���û�з���Ԫ�ؽ�������˵��ʣ��Ԫ�����򣬹ʲ�����Ҫ����
//		if (flag == 0){
//			break;
//		}
//	}
//	
//}

//void bubblesort2(int *a, int n){
//	// i,δ�����Ԫ�ظ���
//	for (int end = n; end > 0; --end){
//		int flag = 0;
//		for (int j = 1; j < end; ++j){
//			if (a[j]>a[j -1]){
//				flag = 1;
//				int tmp = a[j];
//				a[j] = a[j - 1];
//				a[j - 1] = tmp;
//			}
//		}
//		if (flag == 0){
//			break;
//		}
//	}
//}
//void test(){
//	int arr[] = { 4, 8, 9, 6, 7, 3, 2, 1, 6 };
//	bubblesort2(arr, sizeof(arr) / sizeof(arr[0]));
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i){
//		printf("%d ", arr[i]);
//	}
//}
//int main(){
//	test();
//	system("pause");
//	return 0;
//	
//}
//

//     Ԫ�ص�����
//void init(int a[], int n){//�˻���: int *a
////void init5(int *a,int n
//	for (int i = 0; i < n; ++i){
//		*(a + 1) = 0;  //��ȷ
//		a[i] = 0;
//	}
//}
//void printArr(int *a ,int n){
//	for (int i = 0; i < n; ++i){
//		//printf("%d", a[i]);
//		printf("%d", *(a + i));  //���ִ�ӡ��ʽ����
//	}
//	printf("\n");
//
//}
//
//void reverseArr(int a[], int n){
//	int start = 0;
//	int end = n - 1;
//	while (start < end){
//		int tmp = a[start];
//		a[start] = a[end];
//		a[end] = tmp;
//		++start;
//		--end;
//	}
//}
//void test(){
//	int a[] = { 1, 2, 3, 4, 5 };
//	printArr(a, sizeof(a) / sizeof(a[0]));
//	reverseArr(a, sizeof(a) / sizeof(a[0]));
//	printArr(a, sizeof(a) / sizeof(a[0]));
//	init(a, sizeof(a) / sizeof(a[0]));
//	printArr(a, sizeof(a) / sizeof(a[0]));
//}
//int main(){
//	test();
//	system("pause");
//	return 0;
//}





















//void *Mymemecpy(void *dest, void *src, int count){
//	void *ret = dest;
//	while (count != 0){
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//		count--;
//	}
//	return ret;  //û��Ҳ�ܴ�ӡ�� 
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	Mymemecpy(arr, arr + 2, 16); //����4��������
//	for (int i = 0; i < 8; i++){
//		printf("%d ", arr[i]);    //3 4 5 6 5 6 7 8
//	}
//	system("pause");
//	return 0;
//}
