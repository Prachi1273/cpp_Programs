#include<iostream>
// using namespace std;

namespace marvellous 
{
    class demo
    {
       public :
          int i,j;
          void fun()
          {
             std::cout<<"inside fun \n";
          }
    };
    class hello
    {
         public:
             int x,y;
    };
}
namespace infosystems
{
     class demo
     {
         public:
            int a,b;
            void fun()
            {
               std::cout<<"in infi in demo in fun\n";
            }
     };
}

int main()
{
   marvellous:: demo obj1;
   obj1.fun();
   infosystems:: demo obj2;
   obj2.fun();
   
   using namespace marvellous;
   
   hello hobj;
   demo obj3; 
    
    return 0;
} 
