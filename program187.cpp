#include<iostream>
using namespace std;

template<class T>

T Addition(T i,T j)
{
	T ans;
	ans=i+j;
	
	return ans;
}

int main()
{
	double a=11.9,b=10.1,ret=0.0;
	
	ret = Addition(a,b);
	
	cout<<"Addition is : "<<ret<<"\n";
	
	int a1=11 ,b1=10,ret1=0;
	
	ret1= Addition(a1,b1);
	
	cout<<"Addition is : "<<ret<<"\n";
	
	return 0;
}
