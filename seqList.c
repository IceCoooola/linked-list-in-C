#include"SeqList.h"

void seqListPrint(const seqListNode** node)
{
	if (*node)
	{
		seqListNode* temp = (seqListNode*)*node;
		while (temp != NULL)
		{
			printf("%d->", (temp)->data);
			temp = temp->next;
		}
		printf("NULL\n");
	}
	else
	{
		printf("NULL\n");
	}
}

void seqListPushBack(seqListNode** node, dataType newData)
{
	seqListNode* newNode = (seqListNode*)malloc(sizeof(seqListNode));
	newNode->next = NULL;
	newNode->data = newData;
	if (*node == NULL)
	{
		*node = newNode;
	}
	else
	{
		seqListNode* temp = *node;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void seqListPopBack(seqListNode** node)
{
	if (*node == NULL)
	{
		printf("list is empty.\n");
		return;

	}
	if ((*node)->next == NULL)
	{
		free(*node);
		*node = NULL;
	}
	else
	{
		seqListNode* temp = *node;
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}


void seqListPushFront(seqListNode** node, dataType newData)
{
	seqListNode* newNode = malloc(sizeof(seqListNode));
	newNode->data = newData;
	newNode->next = *node;
	*node = newNode;
}

void seqListPopFront(seqListNode** node)
{
	if (*node == NULL)
	{
		printf("list is empty\n");
		return;
	}
	else
	{
		seqListNode* temp = *node;
		*node = temp->next;
		free(temp);

	}
}

void seqListInsert(seqListNode** node, dataType n, dataType newData)//insert after n
{
	if (*node == NULL)
	{
		printf("list is empty.\n");
		return;
	}
	seqListNode* temp = *node;
	while (temp->data != n && temp->next != NULL)
	{
		temp = temp->next;
	}
	if (temp->data == n)
	{
		seqListNode* newNode = malloc(sizeof(seqListNode));
		newNode->data = newData;
		newNode->next = temp->next;
		temp->next = newNode;
	}
	else 
	{
		printf("data no found!\n");
	}

}

void seqListErase(seqListNode** node, dataType data)
{
	if (*node == NULL)
	{
		printf("list is empty.\n");
		return;
	}

	if ((*node)->data == data)
	{
		seqListPopFront(node);
		return;
	}
	seqListNode* temp = *node;
	seqListNode* prev = *node;
	while (temp != NULL && temp->data != data)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
	{
		printf("data no found!\n");
	}
	else
	{
		prev->next = temp->next;
		free(temp);
	}
}

seqListNode* seqListFind(seqListNode* node, dataType data)
{
	while (node != NULL && node->data != data)
	{
		node = node->next;
	}
	if (node == NULL)
	{
		printf("data no found.\n");
		return NULL;
	}
	else
	{
		printf("found.\n");
		return node;
	}
}

void seqListDestroy(seqListNode** node)
{
	while (*node)
	{
		seqListPopFront(node);
	}
}
