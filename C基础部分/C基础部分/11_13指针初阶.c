#include<stdio.h>
#include<string.h>
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
//void printarr(int* p,int size){
//	for (int i = 0; i < size; i++){
//		printf("%d\n", *p);
//		p++;
//	}
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int *p = arr;
//	printarr(p,size);  //传参时传的就是指针p
//	system("pause");
//	return 0;
//}

//写一个函数，可以逆序一个字符串的内容。
//void Reverse(char* str){
//	char *left = str;
//	char *right = str + strlen(str) - 1;
//	while (left < right){
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		++left; //left++;
//		--right; //right--
//	}
//	printf("%s ",str);
//}
//int main(){
//	char str[] = "abcdef";
//	Reverse(str);//Reverse(&str[0]); 一样的
//	system("pause");
//	return 0;
//}
//
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//void sum222(int items,int num){
//	int sum = 0;
//	while (items){								//while 循环
//		sum = sum + num;
//		num = num * 10 + 2;
//		items--;
//	}
//	printf("%d\n", sum);
//}
//void sum222(int items, int num){				
//	int tmp = num; int sum = num;
//	for (int i = 1; i < items; i++){				//for 循环
//		tmp = tmp * 10 + num;
//		sum = sum + tmp;
//	}
//	printf("%d\n", sum);
//}
//int main(){
//	int items = 2;
//	int num = 2;
//	sum222(items,num);
//	system("pause");
//	return 0;
//}


//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<math.h>
//void printshuixianhua(int a, int b){
//	
//	for (int num = a; num <= b; num++){
//		int tmp1 = num; int k = 1;  //k表示整数的位数
//		while(tmp1 / 10 > 0){           //求取数字位数，肯定用while呀！！ 你用if它上不来呀（无法循环）
//			++k;
//			tmp1 = tmp1 / 10;
//		}
//
//		//这个时候num已经用不了了；所有我需要中间变量（num的副本 tmp）
//		int sum = 0;
//		tmp1 = num;
//		while (tmp1){
//			sum = sum + pow(tmp1 % 10, k);
//			tmp1 = tmp1 / 10;
//		}
//		//判断是否相等
//		if (sum == num){
//			printf("%d\n", num);
//		}
//	}
//}
//int main(){
//	int left = 0; int right = 10000;
//	printshuixianhua(left, right);
//	system("pause");
//	return 0;
//}

//打印菱形    && 杨辉三角
//	  *          4 + 1
//   ***		 3 + 3
//  *****		 2 + 5
// *******		 1 + 7
//*********		 0 + 9
// *******
//  *****
//   ***
//    *

int main(){
	int i = 0; int j = 0;
	//打印上半部分（空格+星号）
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5 - i - 1; j++){
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++){
			printf("*");
		}
		printf("\n");
	}

	//打印下半部分
	system("pause");
	return 0;
}
















//初阶考试的两道编程题
//求最小公倍数
//int main(){
//	int a=5; int b=9;
//	for (int i = 7;;i++){
//		if (i % a == 0 && i % b == 0){
//			printf("%d\n", i);
//			break;
//		}
//		
//	}
//	system("pause");
//	return 0;
//}
//int zuidaGY(int a,int b){
//	int c = 0;
//	while (c = a%b){
//		a = b;
//		b = c;
//	}
//	return b;
//}
//int main(){
//	int a = 5; int b = 7; int ret = 0;
//	ret=zuidaGY(a, b);
//	printf("%d\n", a / ret*b);
//	system("pause");
//	return 0;
//}

//I like beijing  ----->   beijing like I
//void reverse_str(char*left,char*right){
//	while (left < right){
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse(char *str){
//	int len = strlen(str);
//	if (len <= 1){
//		return;
//	}
//	reverse_str(str, str + len - 1);
//	char*cur = str;
//	while (*cur){
//		//查找单词边界：空格 或者‘\0’
//		char* start = cur;
//		while (*cur != ' '&& *cur != '\0'){
//			++cur;
//		}
//			//当前单词的区间：[start,cur)
//			//逆转单词；
//			reverse_str(start, cur - 1);
//			//查找下一个单词的区间
//			//跳过空格
//			while (*cur == ' '){
//				++cur;
//			}
//		
//	}
//	printf(str);
//}
//int main(){
//	char str[] = "I like beijing";
//	/*
//	char str[101]={0};
//	*/
//	reverse(str);
//	
//	system("pause");
//	return 0;
//}

//已完