#include<iostream>
using namespace std;

class DigitX
{
   public :
      int iNo;
      
      DigitX()
      {
         iNo =0;
      }
      
      DigitX(int i)
      {
         iNo = i;
      }
      
      int CountDigit()
      {
        int idgt=0;
        int iCnt=0;
        int temp =iNo;
        while(temp!=0)
        {
        idgt=temp%10;
        temp = temp/10;
        iCnt++;
        }
        return iCnt;
      }
      
};

int main()
{
  int iValue =0,iRet=0;
  
  cout<<"Enter the number :"<<"\n";
  cin>>iValue;
  
  DigitX obj(iValue); 
 
  iRet=obj.CountDigit();
  cout<<"number of digits are :"<<iRet<<"\n";
  cout<<obj.iNo<<"\n";
  
  return 0;
}
