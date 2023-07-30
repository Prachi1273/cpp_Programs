#include<iostream>
#include<string>
using namespace std;

class Countsmall
{
	public :
		string str;
		
	public :
		Countsmall()
		{
			cout<<"Inside constructor\n";
		}
		
	public :
	
		void accept()
		{
			cout<<"Enter string :";
			getline(cin,str);
		}
		
		int small()
		{
			int i=0,count=0;
			while(str[i]!='\0')
			{
				if((str[i]>='a') && (str[i]<='z'))
				{
					count++;
				}
				i++;
			}
			return count;
		}
		
	public :
		~Countsmall()
		{
			cout<<"Inside destructor\n";
		}
};

int main()
{
	int iret=0;
	
	Countsmall cobj;
	cobj.accept();
	iret=cobj.small();
	
	cout<<"no. of small letters "<<iret<<"\n";
	
	return 0;
}
