#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node* next;
};

template<class T>
class Queue
{
	public :
	struct node<T>* First;
	int iCount;
	
	Queue();
	
	bool IsQueueEmpty();
	void EnQueue(T no);
	T DeQueue();
	void Display();
};

template<class T>
bool Queue<T>::IsQueueEmpty()
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

template<class T>
Queue<T>::Queue()
{
	First=NULL;
	iCount=0;
}

template<class T>
void Queue<T>::EnQueue(T no)
{
	struct node<T>* newn=new node<T>;
	struct node<T>* temp=First;
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

template<class T>
T Queue<T>::DeQueue()
{
	if(First==NULL)
	{
		cout<<"Unable to pop the element as stack is empty"<<"\n";
		return (T)-1;
	}
	else
	{
		int value=First->data;
		struct node<T>* temp=First;
		First=First->next;
		delete temp;
		iCount--;
		return value;
	}
}

template<class T>
void Queue<T>::Display()
{
	if(First==NULL)
	{
		cout<<"Stack is empty"<<"\n";
	}
	else
	{
		cout<<"Elements of stack are : "<<"\n";
		
		struct node<T>* temp=First;
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
	Queue <int>obj;
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
