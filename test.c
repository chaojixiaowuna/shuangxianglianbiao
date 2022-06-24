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
	ListInsert(plist->next, 5);//Í·²å
	ListInsert(plist, 6);//Î²²å
	ListErase(plist->prv);//Î²É¾
	ListErase(plist->next);//Í·É¾
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