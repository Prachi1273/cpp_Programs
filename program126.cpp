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

int main()
{
   int iLength =0;
   
   cout<<"Enter size of Array"<<"\n";
   cin>>iLength;
   
   ArrayX obj(iLength);
   obj.Accept();
   obj.Display();
  
   return 0;
}
