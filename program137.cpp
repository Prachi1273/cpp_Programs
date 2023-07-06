#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCL
{
   public :
   PNODE First;
   PNODE Last;
   
   SinglyCL();
   
   void InsertFirst(int no);
   void InsertLast(int no);
   void InsertAtPos(int no, int pos);
   
   void DeleteFirst();
   void DeleteLast();
   void DeleteAtPos(int pos);
   
   void Display();
   int Count();
};

SinglyCL :: SinglyCL()
{
  First = NULL;
  Last = NULL;
}

void SinglyCL :: InsertFirst(int no)
{
   //PNODE newn = (PNODE)malloc(sizeof(NODE));
   PNODE newn = new NODE;
   
   newn->data = no;
   newn->next = NULL;
   
   if(First ==NULL && Last ==NULL)
   { 
     First = Last = newn;
     (Last) ->next = First;
   }
   else
   {
      newn ->next =First;
      First = newn;
      (Last) ->next = First;
   }
}

void SinglyCL ::InsertLast(int no)
{
   //PNODE newn = (PNODE)malloc(sizeof(NODE));
   PNODE newn = new NODE;
   
   newn->data = no;
   newn->next = NULL;
   
   if(First ==NULL && Last ==NULL)
   { 
     First = Last = newn;
     (Last) ->next = First;
   }
   else
   {
      (Last)->next = newn;
      Last = newn;
      (Last) ->next = First;
   }
}

void SinglyCL :: Display()
{
  PNODE temp = First;
  cout<<"Elements of Linked List are : "<<"\n";
  
  do
  {
     cout<<"|  |->"<<temp->data<<"|->";
     temp = temp ->next;
  }while(temp != Last->next);
  
  cout<<"\n";
}

int SinglyCL :: Count()
{
  PNODE temp = First;
  int icnt =0;
  do
  {
     icnt++;
     temp = temp ->next;
  }while(temp != Last->next);
  return icnt;
}

void SinglyCL :: DeleteFirst()
{
   PNODE temp = First;
   if((First ==NULL) && (Last ==NULL)) //empty LL
   {
      return ;
   }
   else if(First == Last) // songle node in LL
   {
      //free(*First);  //or free(*Last)
      delete First;
      First = NULL;
      Last = NULL;
   }
   else
   {
      First = (First)->next;
      //free((*Last)->next);
      delete temp;
      (Last) ->next = First;
   }
}

void SinglyCL :: DeleteLast()
{  
   PNODE temp = First;
   
   if((First ==NULL) && (Last ==NULL)) //empty LL
   {
      return ;
   }
   else if(First == Last) // single node in LL
   {
      //free(*First);  //or free(*Last)
      delete First;
      First = NULL;
      Last = NULL;
   }
   else
   {
       while(temp ->next != Last)
       {
          temp = temp ->next;
       }
       
       //free(temp->next);  //free(*Last); 
       delete temp->next;
       Last = temp; 
       (Last) ->next = First;
   }
}

void SinglyCL :: InsertAtPos(int no,int pos)
{
  int iNodeCnt =0,icnt=0;
  
  iNodeCnt = Count();
  PNODE  newn = NULL;
  PNODE temp = First;
  
  if(pos<1 || pos >iNodeCnt +1)
  {
    cout<<"Invalid Position "<<"\n";
    return ;
  }
  
  if(pos ==1)
  {
    InsertFirst(no);
  }
  else if(pos == iNodeCnt)
  {
    InsertLast(no);
  }
  else
  {
     //newn = (PNODE)malloc(sizeof(NODE));
     newn = new NODE;
     
     newn ->data = no;
     newn ->next = NULL;
     
     for(icnt =1;icnt<pos-1;icnt++)
     {
        temp = temp ->next;
     }
     
     newn->next = temp->next;
     temp->next = newn;
  }
}

void SinglyCL :: DeleteAtPos(int pos)
{
  int iNodeCnt =0,icnt=0;
  PNODE temp1 = First;
  PNODE temp2 = First;
  iNodeCnt = Count();
  
  if((pos<1) || (pos >iNodeCnt ))
  {
    cout<<"Invalid Posidtion "<<"\n";
    return ;
  }
  
  if(pos ==1)
  {
    DeleteFirst();
  }
  else if(pos == iNodeCnt)
  {
    DeleteLast();
  }
  else
  {
     for(icnt =1;icnt<pos-1;icnt++)
     {
        temp1 = temp1 ->next;
     }
     temp2 = temp1->next;
     temp1->next = temp2->next;
     //free(temp2);
     delete temp2;
  }
}

int main()
{
   SinglyCL obj;
   int iRet =0;
   
   obj.InsertFirst(51);
   obj.InsertFirst(21);
   obj.InsertFirst(11);
   
   obj.InsertLast(101);
   obj.InsertLast(111);
   obj.InsertLast(121);
   
   obj.InsertAtPos(105,5);
   
   obj.Display();
   iRet = obj.Count();
   
   cout<<"Number of elements of array are : "<<iRet<<"\n";
   
   obj.DeleteAtPos(5);
   
   obj.Display();
   iRet = obj.Count();
   
   cout<<"Number of elements of array are : "<<iRet<<"\n";
   
   obj.DeleteFirst();
   obj.DeleteLast();
   
   obj.Display();
   iRet = obj.Count();
   
   cout<<"Number of elements of array are : "<<iRet<<"\n";
  
  return 0;
}
