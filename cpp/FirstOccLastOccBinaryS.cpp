#include<iostream>
using namespace std;

int FirstOcc(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
      mid=start+(end-start)/2;
    }
     return ans;
}

int LastOcc(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
       mid=start+(end-start)/2;
    }
     return ans;
}

int main()
{

   int arr[8]={3,4,5,6,6,6,6,7};

    cout<<"first index of key is: "<<FirstOcc(arr,8,6)<<endl;
     cout<<"last index of key is: "<<LastOcc(arr,8,6)<<endl;

    return 0;
}