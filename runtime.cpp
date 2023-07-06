#include<iostream>
using namespace std;

class Base 
{
  public :                    //Access specifier
      int A,B;       
      void Fun()                //function defination
      {
          cout<<"Base fun\n";
      }  
      void gun(int i)           //function defination
      {
           cout<<"Base gun\n";
      }
      void gun(int i, int j)    //overloaded function defination 
      {
          cout<<"Base gun2\n";
      }
};

class Derived : public Base 
{
    public :
      int X,Y;      
      void sun()                    //function defination 
      {
           cout<<"inside sun\n";    
      }
      void fun()                    //function redefination 
      {
          cout<<"inside fun\n";     
      }
};

int main()
{
    Derived dobj;
    dobj.fun();
    dobj.gun(11);
    dobj.gun(11,21);
    dobj.sun(); 
    
    return 0;
}
