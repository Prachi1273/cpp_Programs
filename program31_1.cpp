#include<iostream>
#include<string>
using namespace std;

class Countcaps
{
	public :
		string str;
		
	public :
		Countcaps()
		{
			cout<<"Inside constructor\n";
		}
		
	public :
		int caps()
		{
			cout<<"Enter string :";
			getline(cin,str);
			int i=0,count=0;
			while(str[i]!='\0')
			{
				if((str[i]>='A') && (str[i]<='Z'))
				{
					count++;
				}
				i++;
			}
			return count;
		}
		
	public :
		~Countcaps()
		{
			cout<<"Inside destructor\n";
		}
};

int main()
{
	int iret=0;
	
	Countcaps cobj;
	iret=cobj.caps();
	
	cout<<"no. of capital letters "<<iret<<"\n";
	
	return 0;
}
