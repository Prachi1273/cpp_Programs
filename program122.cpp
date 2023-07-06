#include<iostream>
using namespace std;

class Numbers
{
  public :
     int iNo;
     
     Numbers(int i)
     {
        iNo =i;
     }
     
     
};

int main()
{
  int iValue=0;
  
  cout<<"Enter number : "<<"\n";
  cin>>iValue;
  
  Numbers obj(iValue);
  
  
  return 0;
}
