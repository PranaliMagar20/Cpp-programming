#include<iostream>
using namespace std;

void pairSum(int arr[],int  size)
{ 

    int sum=5;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==sum)
            cout<<"here the elements are "<<arr[i]<<arr[j]<<endl;
        }
    }
   
}




int main()
{



int arr[6]={3,5,6,1,4,4};

pairSum(arr,6);



    return 0;
}

//wrong code