#include<stdio.h>
#include<math.h>
//��ӡ100--200֮�������
//int is_prime(int n){
//	for (int i = 2; i < sqrt(n); i++){
//		if (n%i == 0){  //��������
//			return 0;
//		}
//	
//	}
//	return  1;
//}
//int main(){
//	int ret = 0;
//	for (int n = 100; n <= 200; n++){
//		ret=is_prime(n);
//		while (ret){
//			printf("%d\n", n);
//			break;
//		}
//		//printf("%d\n", ret);
//
//	}
//	system("pause");
//	return 0;
//}

//��ӡ����  //�ܱ�4�������ǲ��ܱ�100����
//void is_leapyear(int year){
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
//		printf("%d\n", year);
//	}
//}
//int main(){
//	for (int year = 1900; year <= 2030;year++){
//		is_leapyear(year);
//	}
//	system("pause");
//	return 0;
//}


//ʵ��һ��������������������������
//void change_two_number(int* p1,int *p2){
//	/*int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;*/
//	int tmp = p1;  //������
//	p1 = p2;
//	p2 = tmp;
//
//	printf("%d\n", *p1);
//	printf("%d\n", *p2);
//}
//int main(){
//	int a = 10, b = 20;
//	int*p1 = &a; int *p2 = &b;
//	change_two_number(p1, p2);
//	system("pause");
//	return 0;
//}

//�˷��ھ���
//void Print_Multi(int N){
//	for (int i = 1; i <= N; i++){
//		for (int j = 1; j <= i; j++){
//			printf("%d*%d=%d ", j,i,j*i);
//		}
//		printf("\n");
//	}
//}
//int main(){
//	int n = 9;
//	Print_Multi(n);
//	system("pause");
//	return 0;
//}


//�ݹ鷽ʽ��ӡһ��������ÿһλ��
//void print_each(int n){
//	if (n >= 10){
//		print_each(n / 10);
//	}
//	printf("%d\n", n%10);
//}
//int main(){
//	int a = 123;
//	print_each(a);
//	system("pause");
//	return 0;
//}

//��׳ˣ����ݹ�+�ǵݹ飩
//long long jiecheng(int N){
//	long long result = 1;
//	for (int i = 2; i <= N;i++){
//		result = result*i;
//	}
//	return result;
//}
//long long jiecheng(int N){
//	if (N <=1){
//		return 1;
//	}
//	return N*jiecheng(N - 1);
//}
//int main(){
//	int N = 3;
//	printf("%d\n", jiecheng(N));
//	system("pause");
//	return 0;
//}

//�ݹ飬�ǵݹ�ʵ��strlen;
//void mystrlen(char* p){// �ǵݹ飻
//	int ret = 0;
//	while (*p){
//		ret = ret + 1;
//		*p++; //���� *++p;
//		++*p;  //��ôд�Ǵ�ģ�������ʾ ָ������ó�f������1��������g;������ 0��
//	}
//	printf("%d\n", ret);
//}

//void mystrlen(char* p){       // forѭ�� + �ж�
//	int count = 0;
//	for (;;){
//		if (*p == '\0'){   //���ǵ����ַ� �õ�����
//			printf("%d\n", count);
//			break;    //���򽫻���ѭ��
//		}
//		count++;
//		*p++;
//	}
//}
//int mystrlen(char *p){  //д�� void�ᱨ��     �ݹ���ʽ
//	if (*p == '\0'){
//		return 0;
//	}
//	return 1 + mystrlen(p + 1);
//}
//int main(){
//	char str[] = "abcdef";
//	char* p = str;
//	//mystrlen(p);
//	printf("%d\n", mystrlen(p));
//	system("pause");
//	return 0;
//}

