#include<iostream>
using namespace std;

class create
{
	public :
		int ivalue,dig,evensum,oddsum,diff;
	
		create(int ino)
		{
			ivalue=ino;
			dig=0;
			evensum=oddsum=0;
			diff=0;
		}
		
		int diffrence()
		{
			if(ivalue<0)
			{
				ivalue=-ivalue;
			}
			else if(ivalue==0)
			{
				return 1;
			}
			
			while(ivalue!=0)
			{
				dig=ivalue%10;
				if(dig%2==0)
				{
					evensum=evensum+dig;
				}
				else if(dig%2!=0)
				{
					oddsum=oddsum+dig;
				}
				ivalue=ivalue/10;
			}
			cout<<"Sum of even digits : "<<evensum<<"\n";
			cout<<"sum of odd digits : "<<oddsum<<"\n";
			
			diff=evensum-oddsum;
			
			return diff;
			
		}
};

int main()
{
	int ino=0,ret=0;
	
	cout<<"Enter number : ";
	cin>>ino;
	
	create * cp= new create(ino);
	ret= cp->diffrence();
	
	
	cout<<"Diffrence bertween summation of  of even digits and odd digits is : "<<ret<<"\n";
	
	return 0;
}
