#include<iostream>
using namespace std;
 
 int PrinntA(int arr[],int  size)
 {

    //printing an array
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
 }
 
 
 
 int main()
 {

    int arr[5]={5,7,9,2,1};

     PrinntA(arr,5);
    


    return 0;
 }