#include<iostream>
using namespace std;

class create
{
	public :
		int ivalue,dig,cnt;
	
		create(int ino)
		{
			ivalue=ino;
			dig=0;
			cnt=0;
		}
		
		int Count_odd()
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
				if(dig%2!=0)
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
	int ino=0,ret=0;
	
	cout<<"Enter number : ";
	cin>>ino;
	
	create * cp= new create(ino);
	ret= cp->Count_odd();
	
	
	cout<<"no. of even digits are : "<<ret<<"\n";
	
	return 0;
}
