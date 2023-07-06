#include<iostream>
using namespace std;

class demo
{
   public :
        int i,j;
        
       demo()
       {
         i = 0;
         j = 0;
       }
       demo (int a, int b)
       {
          i = a;
          j = b;
       }
       demo (demo &ref)
       {
       
       }
  
};

int main()
{
  demo obj1;
  demo obj2(11,21); 
  demo obj3(obj2);
  
   return 0;
}
