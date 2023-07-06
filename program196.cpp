#include<iostream>
using namespace std;

template <class T>
T Display(T Arr[],int iSize)
{
	int i=0;
	T max=Arr[0];
	
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]>max)
		{
			max=Arr[i];
		}
	}
	return max;
}

int main()
{
	int Data[]={110,120,320,40};
	
	int iret=Display(Data,4);
	
	cout<<"max of integers is : "<<iret<<"\n";
	float Data1[]={10.1f,20.2f,30.3f,40.4f};
	
	float fret=Display(Data1,4);
	
	cout<<"max of floats is : "<<fret<<"\n";
	
	return 0;
}
