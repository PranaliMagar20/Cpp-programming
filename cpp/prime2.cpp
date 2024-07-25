#include<iostream>
using namespace std;


bool isPrime(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
        return 0;
    }
}



int main()
{

    int n;
    cout<<"enter value of n: "<<endl;
    cin>>n;
     
     int ans=isPrime();

    if(ans==1)
    {
        cout<<"not prime"<<endl;

    }
    else{
        cout<<"prime"<<endl;

    }

    return 0;
}