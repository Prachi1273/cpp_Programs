#include<iostream>
using namespace std;

template<class T>
void Swapi(T &a,T &b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int a=11,b=10;
	cout<<"Value of a "<<a<<"\n";
	cout<<"Value of b "<<b<<"\n";
	
	Swapi(a,b);
	
	cout<<"Value of a "<<a<<"\n";
	cout<<"Value of b "<<b<<"\n";
	
	double a1=11.9,b1=10.7;
	cout<<"Value of a1 "<<a1<<"\n";
	cout<<"Value of b1 "<<b1<<"\n";
	
	Swapi(a1,b1);
	
	cout<<"Value of a1 "<<a1<<"\n";
	cout<<"Value of b1 "<<b1<<"\n";
	
	return 0;
}
