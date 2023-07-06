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
      
      void MaxFrequency()
      {
         int itemp = iNo;
         int idgt =0;
         int Frequency[10] = {0};
         
         while(itemp!=0)
         {
           idgt = itemp %10;
           Frequency[idgt]++;
           itemp = itemp/10;
         }
         
         int iMaxFrequency=0;
         int iMaxDigit=0;
         for(int iCnt =0;iCnt<10;iCnt++)
         {
            if(Frequency[iCnt]>iMaxFrequency)
            {
               iMaxFrequency = Frequency[iCnt];
               iMaxDigit = iCnt;
            }
         }
         
         cout<<"Maximum time ocuured digit is "<<iMaxDigit<<" and its frequency is "<<iMaxFrequency<<"\n";
      }
      
};

int main()
{
  int iValue =0,iRet=0;
  
  cout<<"Enter the number :"<<"\n";
  cin>>iValue;
  
  DigitX obj(iValue); 
 
  obj.MaxFrequency();
  
  return 0;
}
