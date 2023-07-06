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
      
      void DisplayFrequency()
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
         
         for(int iCnt =0;iCnt<10;iCnt++)
         {
            if(Frequency[iCnt]>0)
            {
               cout<<iCnt<<" occures at "<<Frequency[iCnt]<<" times "<<"\n";
            }
         }
      }
      
};

int main()
{
  int iValue =0,iRet=0;
  
  cout<<"Enter the number :"<<"\n";
  cin>>iValue;
  
  DigitX obj(iValue); 
 
  obj.DisplayFrequency();
  
  return 0;
}
