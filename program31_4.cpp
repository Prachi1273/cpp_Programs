#include<iostream>
#include<stdbool.h>
using namespace std;

class vowel
{
	public :
		string str;
		
		void accept()
		{
			cout<<"Enter String : ";
			cin>>str;
		}
		
		bool chkvwl()
		{
			int j=1;
			while(str[j]!='\0')
			{
				if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u')
				{
					return true;
				}
				else
				{
					return false;
				}
				j++;
			}
		}
};

int main()
{
	bool bret = false;
	
	vowel vobj;
	vobj.accept();
	bret=vobj.chkvwl();
	if(bret==true)
	{
		cout<<"Vowel is present \n";
	}
	else if(bret==false)
	{
		cout<<"vowel is not present\n";
	}
	
	return 0;
}
