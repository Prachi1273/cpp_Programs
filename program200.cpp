#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node* next;
};

template<class T>
class SinglyLL
{
	public :
	struct node<T>* First;
	SinglyLL();
	void InsertFirst(T no);
	void Display();
	int Count();
};

template<class T>
SinglyLL <T>:: SinglyLL()
{
	First=NULL;
}

template<class T>
void SinglyLL <T>:: InsertFirst(T no)
{
	struct node<T>* newn= new node<T>;
	
	newn->data=no;
	newn->next=NULL;
	
	if(First==NULL)
	{
		First=newn;
	}
	else
	{
		newn->next=First;
		First=newn;
	}
}

template<class T>
void SinglyLL <T>::Display()
{
	struct node<T>* temp = First;
	while(temp!=NULL)
	{
		cout<<"| "<<temp->data<<" |->";
		temp=temp->next;
	}
	cout<<"\n";
}

template<class T>
int SinglyLL <T>::Count()
{
	struct node<T>* temp = First;
	int i=0;
	while(temp!=NULL)
	{
		i++;
		temp=temp->next;
	}
	return i;
}

int main()
{
	SinglyLL <int>iobj;
	iobj.InsertFirst(101);
	iobj.InsertFirst(51);
	iobj.Display();
	int iret=iobj.Count();
	cout<<"Number of nodes are : "<<iret<<"\n";
	
	SinglyLL <char>cobj;
	cobj.InsertFirst('a');
	cobj.InsertFirst('b');
	cobj.Display();
	iret=cobj.Count();
	cout<<"Number of nodes are : "<<iret<<"\n";
	
	SinglyLL <float>fobj;
	fobj.InsertFirst(10.66);
	fobj.InsertFirst(5.99);
	fobj.Display();
	iret=fobj.Count();
	cout<<"Number of nodes are : "<<iret<<"\n";
	
	SinglyLL <double>dobj;
	dobj.InsertFirst(21.56);
	dobj.InsertFirst(6.88);
	dobj.Display();
	iret=dobj.Count();
	cout<<"Number of nodes are : "<<iret<<"\n";
	
	return 0;
}
