#include<iostream>
using namespace std;

class Base
{
   public :
       int i;   
   private :
       int j;
   protected :
       int k;
   public :
         Base()
         {
             i = 10;
             j = 20;
             k = 30;
         }
         
};

class derived : public Base
{
   public:
       void fun()
         {
             cout<<"value of public i : "<<i<<"\n";    // A
           //  cout<<"value of private j : "<<j<<"\n";   // A
             cout<<"value of protected k : "<<k<<"\n";  // A
         }
};

int main()
{
   derived dobj;
   
      // cout<<"Value of public i :"<<bobj.i<<"\n";      // A
     //  cout<<"Value of private j :"<<bobj.j<<"\n";     // NA
     //  cout<<"Value of protected k :"<<bobj.k<<"\n";   // NA
       
   dobj.fun();
   
   return 0;
}
