#include<stdio.h>
#include"SeqList.h"
void SeqListPushBack(SL* ps, SLDataType x){

}





void SeqListInsert(SL*ps, int pos, SLDataType x){  //任意位置插入
	assert(ps);
	assert(pos < ps ->size && pos>=0);
	SeqListCheckCapacity(ps);   //扩容
	int end = ps->size - 1;
	while (end >= pos){
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size  ++;
}

void SeqListErase(SL*ps, int pos){ //任意位置删除
	assert(ps);
	assert(pos < ps->size && pos >= 0);
	int start = pos;
	while (start < ps->size - 1){
		ps->a[start] = ps->a[start + 1];
		++start;
	}
	ps->size --;
}

int SeqListFind(SeqList* psl, SLDataType x){
	int i = ;
	while (i<)
}

