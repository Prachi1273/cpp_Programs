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
		
		int number()
		{
			int i =1;
			for(i=0;i<isize;i++)
			{
				if(arr[i]==ivalue)
				{
					return i;
				}
			}
		}
		
};

int main()
{
	int ino = 0;
	int iret = 0;
	cout<<"Enter no. of elements : ";
	cin>>ino;
	
	no_present * np = new no_present(ino);
	np->accept();
	iret = np->number();
	
	cout<<"First occurence : "<<iret<<"\n";
	
	return 0;
}
