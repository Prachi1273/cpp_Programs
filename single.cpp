#include<iostream>
using namespace std;

class Base
{
   public:
       int A,B;
       
       Base()
       {
          cout<<"Inside base constructor\n";
       }
       ~Base()
       {
          cout<<"Inside base desructor\n";
       }
       void fun()
       {
          cout<<"Inside base fun\n";
       }
};

class Derived : public Base
{
   public :
       int x,y;
       
       Derived()
       {
          cout<<"Inside derived constructor\n";
       }
       ~Derived()
       {
          cout<<"Inside derived destructor\n";
       }
       void gun()
       {
          cout<<"Inside gun of derived\n";
       }
};

int main()
{
   // derivred dobj;      static memory allocation 

    Derived *ptr = NULL;
    
    ptr = new Derived;           //dynamic memory allocation
   // (int*)malloc(sizeof(int))
   
   ptr->fun();
   ptr->gun();
   
   delete ptr;
    
    return 0;
}
