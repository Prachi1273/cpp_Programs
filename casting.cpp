#include<iostream>
using namespace std;

class Base 
{
  public :                    //Access specifier
      int A,B;       
   
};

class Derived : public Base 
{
    public :
      int X,Y;      
};

int main()
{
    Base *bp = NULL;
    Derived *dp = NULL;
    
    Base bobj;
    Derived dobj;
    
    bp = &bobj;
    dp = &dobj;
    bp = &dobj;
   // dp = &bobj;
    
    return 0;
}
