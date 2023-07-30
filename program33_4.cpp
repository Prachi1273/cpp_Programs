#include<iostream>
using namespace std;

class digit
{
	public :
		int ivalue,dig,mult;
		
		digit(int ino)
		{
			ivalue=ino;
			dig=0;
			mult=1;
		}
		
		int multi_digit()
		{	
			while(ivalue!=0)
			{
				dig=ivalue%10;
				
				if(dig==0)
				{
					dig=1;
				}
				
				mult=mult*dig;
				
				ivalue=ivalue/10;
			}
			return mult;
		}
};

int main()
{
	int ino=0,iret=0;
	
	cout<<"Enter no. : ";
	cin>>ino;
	
	digit* dp = new digit(ino);
	
	iret=dp->multi_digit();
	
	cout<<"Multiplication of digits is : "<<iret<<"\n";
	
	delete dp;
	
	return 0;
}
