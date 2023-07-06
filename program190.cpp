#include<iostream>
using namespace std;

//call by reference
void Swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int a=11,b=10;
	cout<<"Value of a "<<a<<"\n";
	cout<<"Value of b "<<b<<"\n";
	
	Swap(a,b);
	
	cout<<"Value of a "<<a<<"\n";
	cout<<"Value of b "<<b<<"\n";
	
	return 0;
}
