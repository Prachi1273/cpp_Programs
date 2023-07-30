#include<iostream>
using namespace std;

namespace input
{
	class in
	{
		public : 
			int irow,icol,no;
			
			in()
			{
				irow=0;
				icol=0;
			}
			
			void accept()
			{
				cout<<"Enter no. of row : ";
				cin>>irow;
				cout<<"Entre no. of column : ";
				cin>>icol;
			}
	};
}

namespace Display
{
	class show : public input::in
	{
		public : 
			int i,j;
			
			show()
			{
				i=0,j=0;
			}
			
			void display()
			{
				for(i=0;i<irow;i++)
				{
					
					for(j=1;j<=icol;j++)
					{
						if(j%2==0)
						{
							cout<<"#\t";
						}
						else
						{
							cout<<"*\t";
						}
					}
					cout<<"\n";
				}
			}
	};
}

int main()
{
	Display::show *ptr = new Display::show;
	
	ptr->accept();
	ptr->display();
	
	return 0;
}
