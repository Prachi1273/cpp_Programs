#include<iostream>
using namespace std;

class ArrayX
{
   public : 
   int *Arr;
   int iSize;
   
   ArrayX(int i)
   {
      cout<<"allocating memory of resourses..."<<"\n";
      iSize =i;
      Arr = new int[iSize];
   }
   
   ~ArrayX()
   {
      cout<<"deallocating memory of resourses..."<<"\n";
      delete []Arr;
   }
   
   void Accept()
   {
      cout<<"Enter the elements of array : "<<"\n";
      
      for(int i =0;i<iSize;i++)
      {
        cin>>Arr[i];
      }
   }
   
   void Display()
   {
      cout<<" elements of array are: "<<"\n";
      
      for(int i =0;i<iSize;i++)
      {
        cout<<Arr[i]<<"\t";
      }
      cout<<"\n";
   }
   
   
};

class LB : public ArrayX
{
   public:
    LB(int i):ArrayX(i)
    { }
   
   public : 
   int Minimum()
   {
     int iMin=Arr[0];
     
     for(int iCnt =0;iCnt<iSize;iCnt++)
     {
        if(Arr[iCnt]<iMin)
        {
           iMin = Arr[iCnt];
        }
        
     }
     return iMin;
   }
};

int main()
{
   int iLength =0 ,iRet=0;
   
   cout<<"Enter size of Array"<<"\n";
   cin>>iLength;
   
   LB*obj = new LB(iLength);
   
   obj->Accept();
   obj->Display();
   iRet = obj-> Minimum();
  cout<<"Smallest elemet is "<<iRet<<"\n";
  delete obj;
   return 0;
}
