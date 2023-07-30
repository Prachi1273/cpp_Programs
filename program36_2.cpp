#include<iostream>
using namespace std;

class pattern
{
	public : 
		int irow , icol;
		char ch,c;
		
		pattern()
		{
			irow =0;
			icol =0;
			ch='\0';
			c='\0';
		}
		
		void accept()
		{
			cout<<"Enter no. of rows : ";
			cin>>irow;
			cout<<"Enter no. of columns : ";
			cin>>icol;
		}
		
		void display()
		{
			int i =0,j=0;
			for(i=0;i<irow;i++)
			{
				for(j=0;j<icol;j++)
				{
					if(i%2==0)
					{
						c='a';
						cout<<c<<"\t";
						c++;
					}
					else
					{
						ch='A';
						cout<<ch<<"\t";
						ch++;
					}
					
				}
				cout<<"\n";
			}
		}
};

int main()
{
	pattern * ptr = new pattern;
	
	ptr->accept();
	ptr->display();
	
	return 0;
}
