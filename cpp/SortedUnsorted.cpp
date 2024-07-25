#include<iostream>
using namespace std;



int Pivot(int arr[],int size)
{
      int s=0;
     int e=size-1;
     int mid=s+(e-s)/2;


     while(s<e)
     {
        if(arr[mid]>arr[0])
        {
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid=s+(e-s)/2;

     }
     return e; // we can return s also
}


int Binarysearch(int arr[], int s,int e,int key)
{
     int start=s;
     int end=e;
     int mid=s+(e-s)/2;

     while(start<=end)
     {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
     }
     return -1;
}
  
  int findKey(int arr[],int size,int key)
  {
    int pivot=Pivot(arr,size);
   
   if(key>=arr[pivot] && key<=arr[size-1])
   {
      return Binarysearch(arr,pivot,size-1,key);
   }
   else{
      return  Binarysearch(arr,0,pivot-1,key);
   }

   return -1;
  }




int main()
{


   int arr[5]={7,9,1,2,3};
  
    cout<<"index of key is : "<<findKey(arr,5,2)<<endl;

    return 0;
}