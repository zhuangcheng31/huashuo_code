#include"SeqList.h"


void TestSeqList(){
	SeqList s;
	//Ҫ��ʼ��
	SeqListPushBack(&s, 1);



	SeqListFind(&s, 5);
	if (pos != -1){
		SeqListErase(&s, pos);
	}


}

int main(){
	TestSeqList();
	system("pause");
	return 0;
}