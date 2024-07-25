#include<iostream>
#include <climits>
using namespace std;

int getMin(int Arr[],int n)
{
     int min= INT_MAX; 
    for(int i=0;i<=n;i++)
    {
        if(Arr[i]<min)
        {
             min=Arr[i];
            
        }
    }
    return min;
}

int getMax(int Arr[],int n)
{
    int maxi= INT_MIN;
    for(int i=0;i<=n;i++)
    {
        
            maxi=max(maxi,Arr[i]);
           
        
    }
     return max;
}




int main()
{
    int size;
    cin>>size;


    int Arr[100];
    for (int i=0;i<size;i++)
    {
        cin>>Arr[i];
    }



    cout << "Maximum value: " << getMax(Arr, size) << endl;
    cout << "Minimum value: " << getMin(Arr, size) << endl;
    return 0;

}