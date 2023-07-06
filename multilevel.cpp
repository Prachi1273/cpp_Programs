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

 class DerivedX : public Derived 
 {
     public :
        int i,j;
        DerivedX()
        {
            cout<<"inside constructor\n";
        } 
        ~DerivedX()
        {
            cout<<"inside destructor\n";
        }
        void sum()
        {
            cout<<"inside sum\n";
        }
 };

int main()
{
    cout<<"size of base :"<<sizeof(Base)<<"\n";
    cout<<"size of derived :"<<sizeof(Derived)<<"\n";
    cout<<"size of base :"<<sizeof(DerivedX)<<"\n";
    
     DerivedX *ptr = NULL;
    
    ptr = new DerivedX;
    
    ptr->fun();
    ptr->gun();
    ptr->sum();
    
    return 0;
}
