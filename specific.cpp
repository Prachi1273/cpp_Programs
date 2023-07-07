#include<iostream>

using namespace std;

int Addi(int i,int j)
{
   int Ans =0;
   Ans = i+j;
   
   return Ans; 
}

float Addf(float i,float j)
{
   float Ans =0;
   Ans = i+j;
   
   return Ans; 
   }

int main()
{
   int a =10,b=11,iret = 0; 
   float x = 90.0f,y = 67.0f,fret = 0.0f;
   
   iret = Addi(a,b);
   fret =Addf(x,y);
   
   cout<<"Addition of integers :"<<iret<<"\n";
   cout<<"Addition of floats :"<<fret<<"\n";
   
   return 0;
}
