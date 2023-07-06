#include<iostream>
using namespace std;

class Maths
{
   public :                        //access specifier
            int ino1;              //characteristics
            int ino2;              //characteristics
            
     Maths()
     {
           ino1 = 0;
           ino2 = 0;
     }     
     
      Maths(int A, int B)
      {
           ino1 = A;
           ino2 = B; 
      }  
      
      int Addition()
      {
          return ino1 + ino2;
      }
      
      int Subtraction()
      {
           return ino1 - ino2;
      }
};

int main()
{
   Maths mobj1;
   Maths mobj2(11,10);
   int ret = 0;
   
   ret = mobj2.Addition();
   cout<<"Addition is : "<<ret<<"\n";
   
   ret = mobj1.Addition();
   cout<<"Addition is : "<<ret<<"\n";
   
   return 0;
}
