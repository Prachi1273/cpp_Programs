#include<iostream>
using namespace std;

void Display(int Arr[],int iSize)
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
	
	return 0;
}
