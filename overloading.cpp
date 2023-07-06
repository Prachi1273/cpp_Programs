#include<iostream>
using namespace std;

class overloading
{
   public:
   
         int add(int a,int b)
         {
             cout<<"addition of integers\n";
             return a+b;
         }
         
         float add(float a,float b)
         {
             cout<<"addition of float\n";
             return a+b;
         }
         
         double add(double a,double b)
         {
             cout<<"addition of double\n";
             return a+b;
         }
         
         int add(int a,int b,int c)
         {
              cout<<"addition of 3 integers \n";
              return a+b+c;
         }
         
         void fun(int a,float b)
         {}
         
         void fun(float x,int y)
         {}
};

int main()
{
    overloading obj;
    int i;
    float f;
    double d;
    
    i = obj.add(11,21);
    cout<<i<<"\n";
    i = obj.add(11,21,51);
    cout<<i<<"\n";
    f = obj.add(80.99,70.55);
    cout<<f<<"\n";
    d = obj.add(80.99f,70.66f);
    cout<<d<<"\n";
    return 0;
}
