#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
	int no;
	struct node* next;
	struct node* prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First,PPNODE Last,int data)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	
	newn->no = data;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		newn->next = *First;
		(*First)->prev = newn;
		*First = newn;
		(*Last)->next = (*First);
	}
}

void InsertLast(PPNODE First,int data)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = *First;
	
	newn->no = data;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		while((*First)->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
		newn->prev = temp;
		newn->next = NULL;
		(*Last)->next = (*First);
	}
}

void Display(PNODE First)
{
	while(First != NULL)
	{
		printf("| %d |->",First->no);
		First = First->next;
	}
	printf("\n");
}

int Count(PNODE First)
{
	int icnt =0; 
	while(First != NULL)
	{
		icnt++;
		First = First->next;
	}
	return icnt;
}



int main()
{
	PNODE Head = NULL;
	PNODE tail = NULL;
	int iRet =0;
	
	InsertFirst(&Head,&tail,51);
	Display(Head);
	
	InsertFirst(&Head,&tail,21);
	Display(Head);
	
	InsertFirst(&Head,&tail,11);
	Display(Head);
	
	iRet = Count(Head);
	printf("Number of nodes are %d\n",iRet);
	
	InsertLast(&Head,&tail,101);
	Display(Head);
	
	InsertLast(&Head,&tail,111);
	Display(Head);
	
	iRet = Count(Head);
	printf("Number of nodes are %d\n",iRet);
	
	return 0;
}
