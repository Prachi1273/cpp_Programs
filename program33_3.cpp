#include<iostream>
using namespace std;

class digit
{
	public :
		int ivalue,dig,cnt;
		
		digit(int ino)
		{
			ivalue=ino;
			dig=0;
			cnt=0;
		}
		
		int count_digit()
		{
			if(ivalue==0)
			{
				return 1;
			}
			else if(ivalue<0)
			{
				ivalue=-ivalue;
			}
			
			while(ivalue!=0)
			{
				dig=ivalue%10;
				if(dig>3 && dig <7)
				{
					cnt++;
				}
				ivalue=ivalue/10;
			}
			return cnt;
		}
};

int main()
{
	int ino=0,iret=0;
	
	cout<<"Enter no. : ";
	cin>>ino;
	
	digit* dp = new digit(ino);
	
	iret=dp->count_digit();
	
	cout<<"No. of digits between 3 & 7 are : "<<iret<<"\n";
	
	delete dp;
	
	return 0;
}
