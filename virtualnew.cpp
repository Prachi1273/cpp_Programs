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
       virtual void run()
      {
           cout<<"base run\n";
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
      virtual void run()
      {
           cout<<"derived run\n";
      } 
      virtual void mun()
      {
           cout<<"derived mun\n";
      }  
};

int main()
{
    Base *bp = new Derived;
   
    bp = &dobj;   //upcasting
  
    return 0;
}
