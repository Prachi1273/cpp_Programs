#include<iostream>
using namespace std;

class create
{
	public :
		int*arr,ino;
		
		create(int no)
		{
			ino=no;
			arr= new int[ino];
		}
	
		void accept()
		{
			int i=0;
			
			for(i=0;i<ino;i++)
			{
				cin>>arr[i];
			}
		}
};

class divisibility : public create
{
	public :
		divisibility(int no):create(no)
		{ }
	
		void Divisible_by_five()
		{
			int i=0;
			
			cout<<"No. divisible by 5 are : ";
			
			for(i=0;i<ino;i++)
			{
				if(arr[i]%5==0 && arr[i]%2==0)
				{
					cout<<arr[i]<<"\t";	
				}
			}
		}
		
};

int main()
{
	int ino =0,ret=0;
	cout<<"Enter no. of elemnts : ";
	cin>>ino;
	
	divisibility* obj=new divisibility(ino);
	obj->accept();
	obj->Divisible_by_five();
	
	return 0;
}
