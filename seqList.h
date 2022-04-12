#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define dataType int

typedef struct seqListNode
{
	dataType data;
	struct seqListNode* next;

}seqListNode;


void seqListPrint(seqListNode**);
void seqListPushBack(seqListNode**, dataType);
void seqListPopBack(seqListNode**);
void seqListPushFront(seqListNode**, dataType);
void seqListPopFront(seqListNode**);
void seqListInsert(seqListNode**, dataType, dataType);
void seqListErase(seqListNode**, dataType);
void seqListDestroy(seqListNode**);
seqListNode* seqListFind(seqListNode*, dataType data);

