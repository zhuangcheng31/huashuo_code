#include <stdio.h>
int main()
{
int a = 10000;
FILE* pf = fopen_s("test.txt", "w");  //�ļ�ָ��
fputc('a',pf);//дһ���ַ����ļ���
//fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���


fclose_s(pf);
pf = NULL;
sysytem("pause");
return 0;
}