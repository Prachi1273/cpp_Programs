#include<iostream>
#include<stdbool.h>
using namespace std;

class create
{
	public : 
		int isize,istart,iend;
		int*arr;
	
		create(int ino)
		{
			isize = ino;
			arr = new int[isize];
			istart=0;
			iend=0;
		};
		
		void accept()
		{
			int i=0;
			cout<<"Enter elements : ";
			for(i=0;i<isize;i++)
			{
				cin>>arr[i];
			}
			
			cout<<"Enter strating element : ";
			cin>>istart;
			
			cout<<"Enter ending element : ";
			cin>>iend;
		}
};

class no_present : public create
{
	public :
		no_present(int ino) : create(ino)
		{};
		
		void number()
		{
			int i =1;
			for(i=0;i<isize;i++)
			{
				if(arr[i]>istart && arr[i]<iend)
				{
					cout<<arr[i]<<"\t";
				}
			}
		}
		
};

int main()
{
	int ino = 0;

	cout<<"Enter no. of elements : ";
	cin>>ino;
	
	no_present * np = new no_present(ino);
	np->accept();
	np->number();
	
	return 0;
}
