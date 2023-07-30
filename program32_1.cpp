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

class diffrence : public create
{
	public :
		int diff,even,odd;
		
		diffrence(int no):create(no)
		{
			diff=0;
			even=0;
			odd=0;
		}
	
		void summation()
		{
			int i=0;
			for(i=0;i<ino;i++)
			{
				if(arr[i]%2==0)
				{
					even=even+arr[i];	
				}
				else if(arr[i]%2!=0)
				{
					odd=odd+arr[i];
				}
			}
			
			cout<<"summation of even no. is : "<<even<<"\n";
			cout<<"summation of odd no. is : "<<odd<<"\n";
		}
		
		int differ()
		{
			if(even>odd)
			{
				diff=even-odd;
				return diff;
			}
			else if(even<odd)
			{
				diff=odd-even;
				return diff;
			}
		}
};

int main()
{
	int ino =0,ret=0;
	cout<<"Enter no. of elemnts : ";
	cin>>ino;
	
	diffrence* obj=new diffrence(ino);
	obj->accept();
	obj->summation();
	ret=obj->differ();
	
	cout<<"Diffrence bertween summation of even and odd no. is : "<<ret<<"\n";
	
	return 0;
}
