#include<iostream>
using namespace std;



bool Search(int arr[],int size,int key)
{
    for (int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    
   int key;
   cout<<"element that you want to found: "<<endl;
   cin>>key;

  int arr[5]={3,6,7,1,20};

  bool found=Search(arr,5,key);
  if(found==1)
  {
    cout<<"key is present"<<endl;

  }
  else{
    cout<<"key is absent"<<endl;
  }





    return 0;

}