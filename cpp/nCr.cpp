#include<iostream>
using namespace std;


int factorial(int n)
{
    int fact=1;
    
    for(int i=1;i<=n;i++)
    {
        fact=fact *i;
    }
    return fact;
}

int nCr(int n,int r)
{
    int neumrator= factorial(n);
    int denominator=factorial(r)*factorial(n-r);

    int ans =neumrator/denominator;

    return ans;

}

int main()
{

    int n;
    cin>>n;

    int r;
    cin>>r;

    factorial(n);
    
    int answer=nCr(n,r);
    cout<<"ans is: "<<answer<<endl;
    return 0;
}