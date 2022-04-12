#include"SeqList.h"

void test1()
{
	//test push back and pop back
	seqListNode* plist = NULL;
	printf("an empty list created.\n");
	seqListPrint(&plist);
	seqListPushBack(&plist, 65);
	printf("list push back 65.\n");
	seqListPrint(&plist);
	seqListPushBack(&plist, 55);
	printf("list push back 55.\n");
	seqListPrint(&plist);
	seqListPushBack(&plist, 45);
	printf("list push back 45.\n");
	seqListPrint(&plist);
	seqListPushBack(&plist, 35);
	printf("list push back 35.\n");
	seqListPrint(&plist);
	seqListPushBack(&plist, 25);
	printf("list push back 25.\n");
	seqListPrint(&plist);
	seqListPushBack(&plist, 15);
	printf("list push back 15.\n");
	seqListPrint(&plist);
	seqListPopBack(&plist);
	printf("list pop back.\n");
	seqListPrint(&plist);
	seqListPopBack(&plist);
	printf("list pop back.\n");
	seqListPrint(&plist);
	seqListPopBack(&plist);
	printf("list pop back.\n");
	seqListPrint(&plist);
	seqListPopBack(&plist);
	printf("list pop back.\n");
	seqListPrint(&plist);
	seqListPopBack(&plist);
	printf("list pop back.\n");
	seqListPrint(&plist);
	seqListPopBack(&plist);
	printf("list pop back.\n");
	seqListPrint(&plist);
	seqListPopBack(&plist);
	printf("list pop back.\n");
	seqListPrint(&plist);
	printf("end of test1\n\n\n");
}
void test2()
{
	seqListNode* plist = NULL;
	seqListPushFront(&plist, 5);
	printf("list push front 5.\n");
	seqListPrint(&plist);
	seqListPushFront(&plist, 15);
	printf("list push front 15.\n");
	seqListPrint(&plist);
	seqListPushFront(&plist, 25);
	printf("list push front 25.\n");
	seqListPrint(&plist);
	seqListPushFront(&plist, 35);
	printf("list push front 35.\n");
	seqListPrint(&plist);
	seqListPopFront(&plist);
	printf("list pop front.\n");
	seqListPrint(&plist);
	seqListPopFront(&plist);
	printf("list pop front.\n");
	seqListPrint(&plist);
	seqListPopFront(&plist);
	printf("list pop front.\n");
	seqListPrint(&plist);
	seqListPopFront(&plist);
	printf("list pop front.\n");
	seqListPrint(&plist);
	seqListPopFront(&plist);
	printf("list pop front.\n");
	seqListPrint(&plist);
	printf("end of test2\n\n\n");
}

void test3()
{
	seqListNode* plist = NULL;
	seqListInsert(&plist, 5, 30);
	printf("list insert 30 at 5.\n");
	seqListPushBack(&plist, 1);
	seqListPushBack(&plist, 2);
	seqListPushBack(&plist, 3);
	seqListPushBack(&plist, 4);
	seqListPushBack(&plist, 5);
	printf("list push back 1, 2, 3, 4, 5.\n");
	seqListPrint(&plist);
	seqListInsert(&plist, 3, 30);//insert after element 3
	printf("list insert 30 at 3.\n");
	seqListPrint(&plist);
	seqListInsert(&plist, 7, 70);	
	printf("list insert 70 at 7.\n");
	seqListInsert(&plist, 5, 50);	
	printf("list insert 50 at 5.\n");
	seqListInsert(&plist, 1, 10);	
	printf("list insert 10 at 1.\n");
	seqListPrint(&plist);
	seqListErase(&plist, 1);
	printf("list erase 1.\n");
	seqListPrint(&plist);
	seqListErase(&plist, 50);
	printf("list erase 50.\n");
	seqListPrint(&plist);
	seqListErase(&plist, 70);
	printf("list erase 70.\n");
	seqListErase(&plist, 30);
	printf("list erase 30.\n");
	seqListPrint(&plist);
	printf("end of test 3\n\n\n");
}
void test4()
{
	seqListNode* plist = NULL;
	seqListPushBack(&plist, 1);
	seqListPushBack(&plist, 2);
	seqListPushBack(&plist, 3);
	seqListPushBack(&plist, 2);
	seqListPushBack(&plist, 5);
	printf("list push back 1, 2, 3, 4, 5.\n");
	seqListPrint(&plist);
	int count = 0; 
	seqListNode* temp = seqListFind(plist, 2);
	printf("find element 2\n");
	while(temp)
	{
		count++;
		printf("count: %d\n", count);
		temp = seqListFind(temp->next, 2);
	}
	printf("destroy list.\n");
	seqListDestroy(&plist);
	seqListPrint(&plist);
	printf("end of test 4\n\n\n");
	
}

int main()
{
	test1();	//test push back and pop back
	test2();//test push front and pop front
	test3();// test insert and erase
	test4();//test find, destroy
	return 0;
}
