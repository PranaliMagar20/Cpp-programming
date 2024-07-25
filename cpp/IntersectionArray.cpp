//if array is sorted in decreasing order
#include<iostream>
using namespace std;

int Intersection(int arr[],int arr2[],int size1,int size2)

{

    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(arr[i]==arr2[j])
            {
                  cout<<"intersection element : "<<arr[i]<<endl;

            }
            else if(arr[i]<arr2[j])
            {
                i++;
            }
            else{
                j++;
            }
        }
    }
 return arr[i];

}

int main(){

   int  arr[6]={3,5,7,1,6,7,};
   int  arr2[6]={1,8,2,0,9,7};
    
 Intersection(arr,arr2,6,6);
 
    
   
    


return 0;
}

// wrong code