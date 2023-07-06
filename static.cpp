#include<iostream>
using namespace std;

class demo
{
   public :
          int i;
          int j;  
          static int k;
          static int l;  
          demo()
          {
               i = 0;
               j = 0;
          }
          demo(int a, int b)
          {
               i = a;
               j = b;
          }
          
          void fun()
          {
               //static + nonstatic
               cout<<"inside non static method fun\n";       
               cout<<"value of i is : "<<this->i<<"\n";
               cout<<"value of j is : "<<this->j<<"\n";
               cout<<"value of k is : "<<k<<"\n";
               cout<<"value of l is : "<<l<<"\n";          
          }
          static void gun()
          {
               //only static
               cout<<"inside static method gun\n";
               cout<<"value of k is :"<<k<<"\n";
               cout<<"value of l is :"<<l<<"\n";
          }
};
//load time variable
int demo::k = 0;
int demo::l = 0;
int main()
{
   cout<<"inside main\n";
   cout<<"Value of k is:"<<demo::k<<"\n";
   cout<<"Value of l is:"<<demo::l<<"\n";
   demo::gun();
   demo obj1(10,11);
   demo obj2(20,21);
   demo obj3;
   cout<<"Value of i in obj1 :"<<obj1.i<<"\n";
   cout<<"Value of i in obj2 :"<<obj2.i<<"\n";
   
   cout<<"Value of j in obj1 :"<<obj1.j<<"\n";
   cout<<"Value of j in obj2 :"<<obj2.j<<"\n";
   
   obj1.fun();
   obj2.fun();
   return 0;
}


