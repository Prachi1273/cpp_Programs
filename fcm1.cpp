#include<iostream>
using namespace std;
//call by value
void fun(int no)
{
    cout<<"Inside call by value :"<<no<<"\n"
    no++;
}

//call by address
void gun(int *p)
{
    cout<<"Inside call by address :"<<*p<<"\n"
}

//call by refernce 
void sun(int &ref)
{
   cout<<"Inside call by reference :"<<ref<<"\n"
}

int main()
{
   int i = 10;
   int j - 20;
   int k = 30;
   
   fun(i);
   gun(&j);
   sun(k);
   
   return 0;
}
