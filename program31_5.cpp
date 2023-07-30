#include<iostream>
#include<string>
using namespace std;

class Reverse
{
	public :
		string str;
	
		void accept()
		{
			cout<<"Enter string : ";
			getline(cin,str);
		}
		
		void reverse()
		{
			int i=0;
			for(i=str.length()-1;i>=0;i--)
			{
				cout<<str[i];
			}
			cout<<"\n";
		}
};

int main()
{
	Reverse robj;
	robj.accept();
	robj.reverse();
	
	return 0;
}
