#include<iostream>
#include<string>
using namespace std;

class Diffrence
{
	public :
		string str;
		
	public :
		Diffrence()
		{
			cout<<"Inside constructor\n";
		}
		
	public :
	
		void accept()
		{
			cout<<"Enter string :";
			getline(cin,str);
		}
		
		int Diff()
		{
			int i=0,counts=0,countc=0,count=0;
			while(str[i]!='\0')
			{
				if((str[i]>='a') && (str[i]<='z'))
				{
					counts++;
				}
				else if((str[i]>='A') && (str[i]<='Z'))
				{
					countc++;
				}
				i++;
			}
			
			cout<<"no. of capital characters are : "<<countc<<"\n";
			cout<<"no. of small characters are : "<<counts<<"\n";
			
			if(countc>counts)
			{
				count=countc-counts;
				return count;
			}
			else if(countc<counts)
			{
				count=counts-countc;
				return count;
			}
			else if(countc==counts)
			{
				count=counts-countc;
				return count;
			}
		}
		
	public :
		~Diffrence()
		{
			cout<<"Inside destructor\n";
		}
};

int main()
{
	int iret=0;
	
	Diffrence dobj;
	dobj.accept();
	iret=dobj.Diff();
	
	cout<<"Diffrence between no. of capital letters and  small letters is : "<<iret<<"\n";
	
	return 0;
}
