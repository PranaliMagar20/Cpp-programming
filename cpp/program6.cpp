#include<iostrem>
using namepsace std;


int main()
{

    int ilength =0;i=0;
    int *ptr=NULL;
    cout<< "enter no of element youu want to store : "<<endl;
    cin>iLength;

    ptr=new int [iLength];

    cout<<"enter element : "<<endl;
    for(i=0;i<iLength;i++)
    {

        cin>>ptr[i];

    }

   cout<<"enter element : "<<endl;
    for(i=0;i<iLength;i++)
    {

        cin<<ptr[i]<<endl;

    }
   delete []ptr;

   return 0;
}