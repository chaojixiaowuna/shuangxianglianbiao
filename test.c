#include"test.h"
void test1()
{
	ListNode* plist =ListInit();
	ListNode* tmp = NULL;
	/*ListInsert(plist,1);
	ListInsert(plist, 2);
	ListInsert(plist, 3);
	ListInsert(plist, 4);
	ListPrint(plist);*/

	PushBack(plist, 1);
	PushBack(plist, 2);
	PushBack(plist, 3);
	PushBack(plist, 4);
	ListInsert(plist->next, 5);//ͷ��
	ListInsert(plist, 6);//β��
	ListErase(plist->prv);//βɾ
	ListErase(plist->next);//ͷɾ
	ListPrint(plist);


	PopBack(plist);
	PushFront(plist, 5);
	PopFront(plist);
	ListPrint(plist);
	tmp = ListFind(plist, 3);
	ListPrint(tmp->prv);

	ListDestroy(plist);
	plist = NULL;
}
int main()
{
	test1();
	return 0;
}