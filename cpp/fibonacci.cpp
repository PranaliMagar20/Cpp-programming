#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"value of n: "<<endl;
    cin>>n;

    int a=0;
    int b=1;
    cout<<a<< " "<<b<<" ";

    for (int i=1;i<=n;i++)
    {
         int nextV=a+b;
         a=b;
         b=nextV;
         cout<<nextV<<" ";
    }
}