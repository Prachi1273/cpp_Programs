#include<iostream>
using namespace std;

class pattern
{
	public : 
		int irow , icol;
		char ch;
		
		pattern()
		{
			irow =0;
			icol =0;
			ch='\0';
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
				for(j=0,ch='A';j<icol;j++,ch++)
				{
					cout<<ch<<"\t";
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
