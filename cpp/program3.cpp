// addition of num


// approch 2 (pop)
#include<iostream>
using namespace std;

int addition(int ino1, int ino2)
{
   int ians=0;
   ians =ino1+ino2;
   return ians;
}



int main()
{
    int ivalue1 =0, ivalue2=0;
    int iRet=0;

    cout<<"enter first no :  "<<endl;
    cin>>ivalue1;

    cout<<"enter second no :  "<<endl;
    cin >> ivalue2;

    iRet= addition(ivalue1,ivalue2);

    cout<<"add is : "<<iRet<<endl;

    return 0;
}


