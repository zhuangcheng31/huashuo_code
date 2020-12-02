#include<stdio.h>
#include<math.h>
//打印100--200之间的素数
//int is_prime(int n){
//	for (int i = 2; i < sqrt(n); i++){
//		if (n%i == 0){  //不是素数
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

//打印闰年  //能被4整除但是不能被100整除
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


//实现一个函数来交换两个整数的内容
//void change_two_number(int* p1,int *p2){
//	/*int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;*/
//	int tmp = p1;  //都可以
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

//乘法口诀表
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


//递归方式打印一个整数的每一位；
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

//求阶乘；（递归+非递归）
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

//递归，非递归实现strlen;
//void mystrlen(char* p){// 非递归；
//	int ret = 0;
//	while (*p){
//		ret = ret + 1;
//		*p++; //或者 *++p;
//		++*p;  //这么写是错的；这样表示 指针解引用成f后自增1，结果变成g;而不是 0；
//	}
//	printf("%d\n", ret);
//}

//void mystrlen(char* p){       // for循环 + 判断
//	int count = 0;
//	for (;;){
//		if (*p == '\0'){   //这是单个字符 用单引号
//			printf("%d\n", count);
//			break;    //否则将会死循环
//		}
//		count++;
//		*p++;
//	}
//}
//int mystrlen(char *p){  //写成 void会报错     递归形式
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

