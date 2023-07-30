#include<iostream>
#include<stdbool.h>
using namespace std;

class create
{
	public : 
		int isize;
		int*arr;
	
		create(int ino)
		{
			isize = ino;
			arr = new int[isize];
		};
		
		void accept()
		{
			int i=0;
			cout<<"Enter elements : ";
			for(i=0;i<isize;i++)
			{
				cin>>arr[i];
			}
		}
};

class no_present : public create
{
	public :
		int multi;
		
		no_present(int ino) : create(ino)
		{
			multi=1;
		};
		
		int number()
		{
			int i =1;
			for(i=0;i<isize;i++)
			{
				if(arr[i]%2!=0)
				{
					multi=multi*arr[i];
				}
			}
			return multi;
		}
		
};

int main()
{
	int ino = 0,ret;

	cout<<"Enter no. of elements : ";
	cin>>ino;
	
	no_present * np = new no_present(ino);
	np->accept();
	ret=np->number();
	
	cout<<"Product od odd numbers is : "<<ret<<"\n";
	
	return 0;
}
