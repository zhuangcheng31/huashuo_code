#include<stdio.h>
#include<string.h>
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
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
//	printarr(p,size);  //����ʱ���ľ���ָ��p
//	system("pause");
//	return 0;
//}

//дһ����������������һ���ַ��������ݡ�
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
//	Reverse(str);//Reverse(&str[0]); һ����
//	system("pause");
//	return 0;
//}
//
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//void sum222(int items,int num){
//	int sum = 0;
//	while (items){								//while ѭ��
//		sum = sum + num;
//		num = num * 10 + 2;
//		items--;
//	}
//	printf("%d\n", sum);
//}
//void sum222(int items, int num){				
//	int tmp = num; int sum = num;
//	for (int i = 1; i < items; i++){				//for ѭ��
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


//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#include<math.h>
//void printshuixianhua(int a, int b){
//	
//	for (int num = a; num <= b; num++){
//		int tmp1 = num; int k = 1;  //k��ʾ������λ��
//		while(tmp1 / 10 > 0){           //��ȡ����λ�����϶���whileѽ���� ����if���ϲ���ѽ���޷�ѭ����
//			++k;
//			tmp1 = tmp1 / 10;
//		}
//
//		//���ʱ��num�Ѿ��ò����ˣ���������Ҫ�м������num�ĸ��� tmp��
//		int sum = 0;
//		tmp1 = num;
//		while (tmp1){
//			sum = sum + pow(tmp1 % 10, k);
//			tmp1 = tmp1 / 10;
//		}
//		//�ж��Ƿ����
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

//��ӡ����    && �������
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
	//��ӡ�ϰ벿�֣��ո�+�Ǻţ�
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5 - i - 1; j++){
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++){
			printf("*");
		}
		printf("\n");
	}

	//��ӡ�°벿��
	system("pause");
	return 0;
}
















//���׿��Ե����������
//����С������
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
//		//���ҵ��ʱ߽磺�ո� ���ߡ�\0��
//		char* start = cur;
//		while (*cur != ' '&& *cur != '\0'){
//			++cur;
//		}
//			//��ǰ���ʵ����䣺[start,cur)
//			//��ת���ʣ�
//			reverse_str(start, cur - 1);
//			//������һ�����ʵ�����
//			//�����ո�
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

//����