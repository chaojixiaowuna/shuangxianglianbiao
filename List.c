#include"test.h"
ListNode* ListInit()
{
	ListNode* phead;
	//哨兵位头结点
	phead = (ListNode*)malloc(sizeof(ListNode));
	if (phead == NULL)
	{
		exit(-1);
	}
	phead->next = phead;
	phead->prv = phead;
	return phead;
}
void PushBack(ListNode* phead, LTDateType x)
{
	assert(phead);
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (newnode == NULL)
	{
		exit(-1);
	}
	newnode->data=x;
	phead->prv->next = newnode;
	newnode->prv = phead->prv;
	newnode->next = phead; 
	phead->prv = newnode;
}
void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur!=phead)
	{
		printf("%d", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void PopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next!=phead);
	ListNode* tail = phead->prv;
	tail->prv->next = phead;
	phead->prv = tail->prv;
	free(tail);
	tail = NULL;
}
void PushFront(ListNode* phead, LTDateType x)
{
	assert(phead);
	ListNode* tmpnext = phead->next;
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (newnode == NULL)
	{
		exit(-1);
	}
	newnode->data = x;
	phead->next=newnode;
	newnode->next = tmpnext;
	newnode->prv = phead;
	tmpnext->prv = newnode;
}
void PopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* pop= phead->next;
	phead->next = pop->next;
	pop->prv = phead;
}

ListNode* ListFind(ListNode* phead, LTDateType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}

void ListInsert(ListNode* pos, LTDateType x)
{
	assert(pos);
	ListNode* posprv = pos->prv;
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (newnode == NULL)
	{
		exit(-1);
	}
	newnode->data = x;
	posprv->next = newnode;
	newnode->prv = posprv;

	pos->prv = newnode;
	newnode->next = pos;

}
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* posprv = pos->prv;
	ListNode* posnext = pos->next;
	posprv->next = posnext;
	posnext->prv = posprv;
	free(pos);
	pos = NULL;
}
void ListDestroy(ListNode* phead)
{
	ListNode* cur = phead->next;
	ListNode* tmp = NULL;
	while (cur != phead)
	{
		tmp = cur;
		cur = cur->next;
		free(tmp);
		tmp = NULL;
	}
	free(phead);
}