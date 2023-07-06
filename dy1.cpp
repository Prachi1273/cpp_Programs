#include<iostream>
using namespace std;

class demo
{
    public:
        int x;
        int y;
        
        demo()
        {
            cout<<"Inside constructor"<<"\n";
        }
        ~demo()
        {
            cout<<"Inside destructor"<<"\n";
        }
        void fun()
        {
            cout<<"Inside fun"<<"\n"; 
        }
};

int main()
{
   //demo obj1;
   demo *ptr = NULL;
   ptr = new demo;
   ptr->fun();
   delete ptr;
   
   return 0;
}
