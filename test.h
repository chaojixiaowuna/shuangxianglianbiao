#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define LTDateType int

typedef struct ListNode
{
	LTDateType data;
	struct ListNode* next;
	struct ListNode* prv;
}ListNode;

ListNode* ListInit();
void PushBack(ListNode* phead, LTDateType x);
void PopBack(ListNode* phead);
void PushFront(ListNode* phead, LTDateType x);
void PopFront(ListNode* phead);
void ListPrint(ListNode* phead);
ListNode* ListFind(ListNode* phead,LTDateType x);
void ListInsert(ListNode* pos, LTDateType x);
void ListErase(ListNode* pos);
void ListDestroy(ListNode* phead);