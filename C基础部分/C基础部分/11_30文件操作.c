#include <stdio.h>
int main()
{
int a = 10000;
FILE* pf = fopen_s("test.txt", "w");  //文件指针
fputc('a',pf);//写一个字符到文件中
//fwrite(&a, 4, 1, pf);//二进制的形式写到文件中


fclose_s(pf);
pf = NULL;
sysytem("pause");
return 0;
}