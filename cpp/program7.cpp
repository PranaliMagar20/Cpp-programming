#include<iostream>
using namespace std;


struct node // datatypes are same as c as in c++
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


class singlyll
{
     public :
        PNODE First;
        int iCount;

        singlyll();

        void Display();
        int Count();

        void InsertFirst(int No); // this are only prototype  ,define can be outside of class
        void InsertLast(int No);
        void InsertAtpos(int No, int iPos);

        void Deletefirst();
         void DeleteLast();
          void DeleteAtPos(int iPos);


  
};

 singlyll:: singlyll()  //we can identify this define of  prototyype by using class name with ::
        {
           cout<<"inside constructor\n";
            First=NULL;
            iCount=0;

        }

void singlyll:: Display()  //define of function of protype
{}

 int singlyll:: Count()
 {}
 void  singlyll::InsertFirst(int No)
 {}

 




int main()
{
  singlyll obj;



    return 0;
}