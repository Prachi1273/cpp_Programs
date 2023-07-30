#include<iostream>
//using namespace std;

namespace Pattern
{
	class pattern
	{
		public :
			int irow,icol,i,j;
			char c;
			
			pattern()
			{
				irow=0,icol=0,i=0,j=0;
				c='\0';
			}
		
			void accept()
			{
				std::cout<<"Enter no. of rows : ";
				std::cin>>irow;
				std::cout<<"Enter no. of columns : ";
				std::cin>>icol;
			}	
	};
}

namespace printX
{
	class pattern : public Pattern::pattern
	{
		public : 
			void Display()
			{
				for(i=0,c='A';i<irow;i++,c++)
				{
					for(j=0;j<icol;j++)
					{
						std::cout<<c<<"\t";
					}
					std::cout<<"\n";
				}
			}
	};
}

int main()
{
	printX::pattern obj;
	obj.accept();
	obj.Display();
	
	return 0;
}
