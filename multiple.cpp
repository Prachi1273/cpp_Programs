#include<iostream>
using namespace std;

class Base1   //4
{
   public:
       int A;
       
       Base1()
       {
          cout<<"Inside base1 constructor\n";
       }
       ~Base1()
       {
          cout<<"Inside base1 desructor\n";
       }
       void fun()
       {
          cout<<"Inside base1 fun\n";
       }
};

class Base2    //12
{
   public :
        int I,J,K;
         Base2()
       {
          cout<<"Inside base2 constructor\n";
       }
       ~Base2()
       {
          cout<<"Inside base2 desructor\n";
       }
       void gun()
       {
          cout<<"Inside base2 fun\n";
       }
};
//Not allowed in java 
class derived : public Base1,public Base2    //24
{
      public :
         int X,Y;  
       derived()
       {
          cout<<"Inside derived constructor\n";
       }
       ~derived()
       {
          cout<<"Inside derived desructor\n";
       }
       void sun()
       {
          cout<<"Inside derived fun\n";
       }
};

int main()
{
   derived dobj;
   
   dobj.fun();    //Base1
   dobj.gun();    //Base2
   dobj.sun();    //Derived
    
    return 0;
}
