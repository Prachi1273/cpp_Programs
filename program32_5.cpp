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
	
		void multiples_of_11()
		{
			int i=0;
			
			cout<<"multiples of 11 are : ";
			
			for(i=0;i<ino;i++)
			{
				if(arr[i]%11==0)
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
	obj->multiples_of_11();
	
	return 0;
}
