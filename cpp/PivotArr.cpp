// min element

#include<iostream>
using namespace std;

int Pivot(int arr[],int  size)
{

   int s=0;
   int e=size-1;
 int  mid=s+(e-s)/2;


   while(s<e)
   {
     if(arr[mid]>=arr[0])
     {
        
        s=mid+1;
     }
     else
     {
        e=mid;
     }
     mid=s+(e-s)/2;
     
   }
   return s;
}

int main()
{

     int arr[4]={3,4,1,5};

     cout<<"mountain element index of array is : "<<Pivot(arr,4)<<endl;

    return 0;
}