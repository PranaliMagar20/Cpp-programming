#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter value of a: "<<endl;
    cin>>a;

    int b;
    cout<<"enter value of b: "<<endl;
    cin>>b;

    char op;
    cout<<"enter operation you want : "<<endl;
    cin>>op;

    switch(op)
    {
        case '+': cout<<(a+b)<<endl; 
        break;
        case '*': cout<<(a*b)<<endl;
        break;
        case '/': cout<<(a/b)<<endl;
        break;
        case '%': cout<<(a%b)<<endl;
        break;
        default: cout<<"invalid operation"<<endl;
        break;

    }
return 0;


}