#include<iostream>
using namespace std;




int BinaryS(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
   int  mid=(start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return  -1;
}


int main()
{
   int even[6]={3,4,5,6,7,8};

 int evenIndex =BinaryS(even ,6,7);
 cout<<"index of key is: "<<evenIndex<<endl;

    return 0;
}