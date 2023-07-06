#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* next;
};

class Queue
{
	public :
	struct node* First;
	int iCount;
	
	Queue();
	
	bool IsQueueEmpty();
	void EnQueue(int no);
	int DeQueue();
	void Display();
};

bool Queue::IsQueueEmpty()
{
	if(iCount==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Queue::Queue()
{
	First=NULL;
	iCount=0;
}

void Queue::EnQueue(int no)
{
	struct node* newn=new node;
	struct node* temp=First;
	newn->data=no;
	newn->next=NULL;
	
	if(First==NULL)
	{
		First=newn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
	
	iCount++;
	
	cout<<no<<" gets pushed in the stack successfully"<<"\n";
}

int Queue::DeQueue()
{
	if(First==NULL)
	{
		cout<<"Unable to pop the element as stack is empty"<<"\n";
		return -1;
	}
	else
	{
		int value=First->data;
		struct node* temp=First;
		First=First->next;
		delete temp;
		iCount--;
		return value;
	}
}

void Queue::Display()
{
	if(First==NULL)
	{
		cout<<"Stack is empty"<<"\n";
	}
	else
	{
		cout<<"Elements of stack are : "<<"\n";
		
		struct node* temp=First;
		while(temp!=NULL)
		{
			cout<<"| "<<temp->data<<" |->";
			temp=temp->next;
		}
		cout<<"NULL"<<"\n";
	}
}

int main()
{
	Queue obj;
	obj.EnQueue(11);
	obj.EnQueue(21);
	obj.EnQueue(51);
	obj.EnQueue(101);
	
	obj.Display();
	
	int iret=obj.DeQueue();
	cout<<"Poped element is : "<<iret<<"\n";
	
	iret=obj.DeQueue();
	cout<<"Poped element is : "<<iret<<"\n";
	
	obj.Display();
	
	return 0;
}
