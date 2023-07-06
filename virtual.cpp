#include<iostream>
using namespace std;

class Base 
{
  public :                    //Access specifier
      int A,B;       
      void fun()
      {
         cout<<"base fun\n";
      }
    virtual void gun()
      {
          cout<<"inside gun\n";
      }
      virtual void sun()
      {
           cout<<"base sun\n";
      }
};

class Derived : public Base 
{
    public :
      int X,Y; 
      void gun()
      {
          cout<<"derived gun\n";
      } 
      void run()
      {
           cout<<"derived run\n";
      } 
     virtual  void mun()
      {
           cout<<"derived mun\n";
      }  
};

int main()
{
    Base *bp = NULL;
    Derived dobj;
    bp = &dobj;   //upcasting
    
    bp->fun();
    bp->gun();
    bp->sun();
    
    return 0;
}
