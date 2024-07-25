// addition of num


// approch 3(object oriented)
#include<iostream>
using namespace std;

class Arithmatic
{
   public:
   int ino1;
   int ino2;

   Arithmatic(int A, int B)//constructor parameter same as class name
   {
    ino1=A;
    ino2=B;
   }
   int Addition()//function
   {

    int ians=0;
    ians=ino1+ino2;
    return ians;

   }

};



int main()
{
    int ivalue1 =0, ivalue2=0;
    int iRet=0;

    cout<<"enter first no :  "<<endl;
    cin>>ivalue1;

    cout<<"enter second no :  "<<endl;
    cin >> ivalue2;

    Arithmatic aobj(ivalue1,ivalue2);

    iRet =aobj.Addition();
    cout<<"Addition is : "<<iRet<<endl;

    return 0;
}


