#include<stdio.h>
#include "ɨ��.h"
int ** creatMat(int row, int col){
	//����һ��ָ������
	char **Mat = (char **) malloc(sizeof(char*)*(row+2));
	//����һ��Ԫ�ؿռ�
	for (int i = 0; i < row+2; ++i){
		Mat[i] = (char*)malloc(sizeof(char*)*(col + 2));
	}
	return Mat;
}
void initMat(char**Mat, int row, int col, char ch){
	for (int i = 0; i < row + 2; ++i){
		for (int j = 0; j < col + 2; ++j){
			Mat[i][j] = ch;
		}
	}
}

void setMine(char **Mat, int row, int col){
	int count = MINE_NUM;
	while (count){
		//x:1--row;   y:1--col
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (Mat[x][y] == '*'){
			Mat[x][y] = '*';
			--count;
		}
	}
	
}

void showMat(char** Mat, int row, int col){
	printf("----------------------------------");
	for (int i = 0; i <= col; ++i){
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; ++i){
		printf("%c ", i);
		for (int j = 1; i <= col; ++j){
			printf("%c ", Mat[i][j]);
		}
		printf("\n");
	}
}


void game(int ** mineMat, int**mineInfo, int row, int col){
	int step = 0;
	while (step <= row*col - MINE_NUM){
		int x, y;
		printf("������һ�����꣺\n");
		scanf("%d%d", &x, &y);
		if (mineMat[x][y] == '*'){
			printf("game over");
			showMat(mineMat, row, col);
			break;
		}
		//��ȡx,yλ����Χ�׵ĸ���
		int num = getMineNum(mineMat, row, col, x, y);
		mineInfo[x][y] = num;
		shoeMat()
		

	}
}
void test(){
	char ** mineMat = creatMat(9, 9);
	char ** mineInfo = creatMat(9, 9);
	initMat(mineMat, 9, 9, '0');
	initMat(mineInfo, 9, 9, '*');
	setMat(mineMat, 9, 9);
	setMine(mineMat, 9, 9);
	game(mineMat, mineInfo, 9, 9);
}
void game(int ** Mat, int row, int col){
	initMat(mineMat, row, col, '0');
}