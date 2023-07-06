#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[],int iSize)
{
	int i=0;
	
	for(i=0;i<iSize;i++)
	{
		cout<<Arr[i]<<"\n";
	}
}

int main()
{
	int Data[]={10,20,30,40};
	
	Display(Data,4);
	
	float Data1[]={10.1,20.2,30.3,40.4};
	
	Display(Data1,4);
	
	char Data2[]={'q','p','d','s','a'};
	
	Display(Data2,5);
	
	return 0;
}
