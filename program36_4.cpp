#include<iostream>
using namespace std;

namespace input
{
	class in
	{
		public : 
			int irow,icol;
			
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
				for(i=irow;i>0;i--)
				{
					for(j=0;j<icol;j++)
					{
						cout<<i<<"\t";
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
