#include<iostream>
using namespace std;

void Reverse(int arr[],int n)
{
int start=0 ;
int end=n-1;

while(start<=end)

{
    swap(arr[start],arr[end]);
    start++;
    end--;

}

}

void printArr(int arr[],int size)
{

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<" "<<endl;

}
int main()
{

    int arr[6]={5,7,9,4,0,1};

    Reverse(arr,6);

    printArr(arr,6);

    return 0;

}