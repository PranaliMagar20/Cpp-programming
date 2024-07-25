#include<iostream>
using namespace std;



void SwapAlt(int arr[],int size)
{
    for(int i=0;i<size;i=i+2)
    {
        if( i+1<size )
        {
            swap(arr[i],arr[i+1]);
        }
            
    }

}
void printArr(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}



int main()
{
   int  arr[6]={6,9,0,1,3,4};
   int  brr[5]={8,3,8,9,5};
    
    SwapAlt(arr,6);
       cout<<endl;
    SwapAlt(brr,5);
    printArr(arr,6); 
    cout<<endl;
    printArr(brr,5);



   

}