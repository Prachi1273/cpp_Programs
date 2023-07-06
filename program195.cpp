#include<iostream>
using namespace std;

template <class T>
T Display(T Arr[],int iSize)
{
	int i=0;
	T Add;
	
	for(i=0;i<iSize;i++)
	{
		Add=Add+Arr[i];
	}
	return Add;
}

int main()
{
	int Data[]={10,20,30,40};
	
	int iret=Display(Data,4);
	
	cout<<"Addition of integers is : "<<iret<<"\n";
	float Data1[]={10.1f,20.2f,30.3f,40.4f};
	
	float fret=Display(Data1,4);
	
	cout<<"Addition of floats is : "<<fret<<"\n";
	
	return 0;
}
