#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"value of n: "<<endl;
    cin>>n;

    
    for(int i=0; i<n; i++)
    {

    if(n%2==0)
    {
        cout<<"is not prime"<<endl;
        
    }
    else{
      
        cout<<"prime"<<endl;
    }

    return 0;
}
}