#include<iostream>
#include<stdbool.h>
using namespace std;

class create
{
	public : 
		int isize,ivalue;
		int*arr;
	
		create(int ino)
		{
			isize = ino;
			arr = new int[isize];
			ivalue=0;
		};
		
		void accept()
		{
			int i=0;
			cout<<"Enter elements : ";
			for(i=0;i<isize;i++)
			{
				cin>>arr[i];
			}
			
			cout<<"Enter another element : ";
			cin>>ivalue;
		}
};

class no_present : public create
{
	public :
		no_present(int ino) : create(ino)
		{};
		
		bool number()
		{
			int i =1;
			while(arr[i]!='\0')
			{
				if(arr[i]==ivalue)
				{
					return true;
				}
				else
				{
					return false;
				}
				i++;
			}
		}
		
};

int main()
{
	int ino = 0;
	bool bret = false;
	cout<<"Enter no. of elements : ";
	cin>>ino;
	
	no_present * np = new no_present(ino);
	np->accept();
	bret = np->number();
	
	if(bret==true)
	{
		cout<<"True\n";
	}
	else if(bret == false)
	{
		cout<<"False\n";
	}
	
	return 0;
}
