#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////
//
// Code of Singly Linear
//
/////////////////////////////////////////////////////////////

template <class T>
struct nodeSL
{
    T data;
    struct nodeSL *next;
};

template <class T>
class SinglyLL
{
    private:
        struct nodeSL<T> * First;
        int iCount;

    public:
        SinglyLL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
SinglyLL<T>::SinglyLL()
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T>::Display()
{
    struct nodeSL<T> * temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<"|-> ";
        temp = temp -> next;
    }
    cout<<"NULL\n";
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T No)
{
    struct nodeSL<T> * newn = NULL;

    newn = new nodeSL<T>;    // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL) // if(iCount == 0)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertLast(T No)
{
    struct nodeSL<T> * newn = NULL;
    struct nodeSL<T> * temp = First;

    newn = new nodeSL<T>;    // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL) // if(iCount == 0)
    {
        First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeSL<T> * newn = NULL;
    int i = 0;
    struct nodeSL<T> * temp;

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else 
    {
        temp = First;
        
        newn = new nodeSL<T>;
        newn->data = No;
        newn->next = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp -> next = newn;
        iCount++;
    }
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    struct nodeSL<T> * temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First -> next;
        delete temp;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
    struct nodeSL<T> * temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp ->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    struct nodeSL<T> * temp1;
    struct nodeSL<T> * temp2;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else 
    {
        temp1 = First;

        for(i = 1; i < iPos-1; i++)
        {
            temp1 = temp1 -> next;
        }

        temp2 = temp1->next;

        temp1->next = temp2->next;
        delete temp2;

        iCount--;
    }    
}

/////////////////////////////////////////////////////////////
//
// Code of Doubly Circular
//
/////////////////////////////////////////////////////////////
template <class T>
struct nodeDC
{
    T data;
    struct nodeDC *next;
    struct nodeDC *prev;
};

template <class T>
class DoublyCL
{
    private:
        struct nodeDC<T> * First;
        struct nodeDC<T> * Last;
        int iCount;

    public:
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
DoublyCL<T>:: DoublyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void DoublyCL<T>::Display()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"Linked List is emprty\n";
        return;
    }

    cout<<"<=> ";
    do
    {
        cout<<"| "<<First->data <<"| <=> ";
        First = First -> next;
    }while(Last -> next != First);

    cout<<"\n";
}

template <class T>
int DoublyCL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T>::InsertFirst(T No)
{
    struct nodeDC<T> * newn = NULL;

    newn = new nodeDC<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    Last -> next = First;
    First -> prev = Last;

    iCount++;
}

template <class T>
void DoublyCL<T>::InsertLast(T No)
{
    struct nodeDC<T> * newn = NULL;

    newn = new nodeDC<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last ->next = newn;
        newn->prev = Last;
        Last = newn;
    }
    Last -> next = First;
    First -> prev = Last;

    iCount++;    
}

template <class T>
void DoublyCL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeDC<T> * temp = NULL;
    struct nodeDC<T> * newn = NULL;

    int i = 0;

    if(iPos < 1 || iPos > iCount+1)
    {
        cout<<"Invalid postion\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        newn = new nodeDC<T>;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;

        for(i = 1; i < iPos -1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

template <class T>
void DoublyCL<T>::DeleteFirst()
{
    if(First == NULL && Last == NULL)   // Empty LL
    {
        return;
    }
    else if(First == Last)   // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // More than one node
    {
        First = First -> next;
        delete Last->next;
        First -> prev = Last;
        Last -> next = First;
    }
    iCount--;
}

template <class T>
void DoublyCL<T>::DeleteLast()
{
    if(First == NULL && Last == NULL)   // Empty LL
    {
        return;
    }
    else if(First == Last)   // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // More than one node
    {
        Last = Last -> prev;
        delete First -> prev;

        Last -> next = First;
        First -> prev = Last;
    }
    iCount--;    
}

template <class T>
void DoublyCL<T>::DeleteAtPos(int iPos)
{
    struct nodeDC<T> * temp = NULL;

    int i = 0;

    if(iPos < 1 || iPos > iCount)
    {
        cout<<"Invalid postion\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = First;

        for(i = 1; i < iPos -1; i++)
        {
            temp = temp -> next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }    
}

/////////////////////////////////////////////////////////////
//
// Code of Doubly Liear
//
/////////////////////////////////////////////////////////////

    template <class T>
struct nodeDL
{
    T data;
    struct nodeDL *next;
    struct nodeDL *prev;
};

template <class T>
class DoublyLL
{
    private:
        struct nodeDL<T> * First;
        int iCount;

    public:
        DoublyLL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
DoublyLL<T>::DoublyLL()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void DoublyLL<T>::Display()
{
    struct nodeDL<T> * temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |<=> ";
        temp = temp -> next;
    }
    cout<<"NULL\n";
}

template <class T>
int DoublyLL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyLL<T>::InsertFirst(T No)
{
    struct nodeDL<T> * newn = new nodeDL<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    iCount++;
}

template <class T>
void DoublyLL<T>::InsertLast(T No)
{
    struct nodeDL<T> * newn = new nodeDL<T>;
    struct nodeDL<T> * temp = First;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn->prev = temp;
    }
    iCount++;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T No, int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        struct nodeDL<T> * newn = new nodeDL<T>;
        struct nodeDL<T> * temp = First;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        newn->prev = temp;
        temp->next->prev = newn;
        temp->next = newn;

        iCount++;
    }
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{
    if(First == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }

    if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First -> next;
        delete First -> prev;
        First -> prev = NULL;
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
    if(First == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }

    if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        struct nodeDL<T> * temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct nodeDL<T> * temp = First;

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        struct nodeDL<T> * toDelete = temp->next;

        temp->next = toDelete->next;
        if(toDelete->next != NULL)
        {
            toDelete->next->prev = temp;
        }

        delete toDelete;
        iCount--;
    }
}

/////////////////////////////////////////////////////////////
//
// Code of Singly Circular
//
/////////////////////////////////////////////////////////////

   template <class T>
struct nodeSC
{
    T data;
    struct nodeSC *next;
};

template <class T>
class SinglyCL
{
    private:
        struct nodeSC<T> * First;
        struct nodeSC<T> * Last;
        int iCount;

    public:
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
SinglyCL<T>::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL<T>::Display()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"Linked List is empty\n";
        return;
    }

    struct nodeSC<T> * temp = First;
    do
    {
        cout<<"| "<<temp->data<<" |-> ";
        temp = temp->next;
    } while(temp != First);
    cout<<"NULL\n";
}

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T>::InsertFirst(T No)
{
    struct nodeSC<T> * newn = new nodeSC<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    Last->next = First;
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertLast(T No)
{
    struct nodeSC<T> * newn = new nodeSC<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        Last = newn;
    }
    Last->next = First;
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T No, int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        struct nodeSC<T> * newn = new nodeSC<T>;
        struct nodeSC<T> * temp = First;

        newn->data = No;
        newn->next = NULL;

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"Linked List is empty\n";
        return;
    }

    if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete Last->next;
        Last->next = First;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"Linked List is empty\n";
        return;
    }

    if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        struct nodeSC<T> * temp = First;

        while(temp->next != Last)
        {
            temp = temp->next;
        }

        delete Last;
        Last = temp;
        Last->next = First;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct nodeSC<T> * temp = First;

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        struct nodeSC<T> * toDelete = temp->next;

        temp->next = toDelete->next;
        delete toDelete;
        iCount--;
    }
}

/////////////////////////////////////////////////////////////
//
// Code of Stack
//
/////////////////////////////////////////////////////////////
template <typename T>
class Stack {
private:
    struct nodeS<T> *Top;
    int iCount;
public:
    Stack();
    void Push(T);
    T Pop();
    void Display();
    int Count();
};

template <typename T>
Stack<T>::Stack() {
    Top = NULL;
    iCount = 0;
}

template <typename T>
void Stack<T>::Push(T No) {
    struct nodeS<T> *newn = new nodeS<T>;
    newn->data = No;
    newn->next = NULL;

    if (Top == NULL) {
        Top = newn;
    } else {
        newn->next = Top;
        Top = newn;
    }
    iCount++;
}

template <typename T>
T Stack<T>::Pop() {
    if (iCount == 0) {
        throw std::out_of_range("Stack is empty");
    }

    T Value = Top->data;
    struct nodeS<T> *temp = Top;
    Top = Top->next;
    delete temp;
    iCount--;
    return Value;
}

template <typename T>
void Stack<T>::Display() {
    struct nodeS<T> *temp = Top;

    while (temp != NULL) {
        cout << "| " << temp->data << " |-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

template <typename T>
int Stack<T>::Count() {
    return iCount;
}


/////////////////////////////////////////////////////////////
//
// Code of Queue
//
/////////////////////////////////////////////////////////////

   template <typename T>
class Queue {
private:
    struct nodeQ<T> *First;
    struct nodeQ<T> *Last;
    int iCount;
public:
    Queue();
    void Enqueue(T);
    T Dequeue();
    void Display();
    int Count();
};

template <typename T>
Queue<T>::Queue() {
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <typename T>
void Queue<T>::Enqueue(T No) {
    struct nodeQ<T> *newn = new nodeQ<T>;
    newn->data = No;
    newn->next = NULL;

    if (First == NULL && Last == NULL) {
        First = newn;
        Last = newn;
    } else {
        Last->next = newn;
        Last = newn;
    }
    iCount++;
}

template <typename T>
T Queue<T>::Dequeue() {
    if (iCount == 0) {
        throw std::out_of_range("Queue is empty");
    }

    T Value = First->data;
    struct nodeQ<T> *temp = First;
    First = First->next;
    delete temp;
    iCount--;
    return Value;
}

template <typename T>
void Queue<T>::Display() {
    struct nodeQ<T> *temp = First;

    while (temp != NULL) {
        cout << "| " << temp->data << " |-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

template <typename T>
int Queue<T>::Count() {
    return iCount;
}


   int main()
{
    int iRet = 0;

    //Singly Linear Linked List
    SinglyLL <int>obj1;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.InsertLast(101);

    obj1.InsertAtPos(75,3);

    obj1.Display();
    iRet = obj1.Count();
    cout<<"Number of elements in LL are : "<<iRet<<"\n";

    obj1.DeleteAtPos(3);

    obj1.DeleteFirst();
    obj1.DeleteLast();

    obj1.Display();
    iRet = obj1.Count();
    cout<<"Number of elements in LL are : "<<iRet<<"\n";

    //Doubly Linear Linked List
    DoublyLL <int>obj2;

    obj2.InsertFirst(51);
    obj2.InsertFirst(21);
    obj2.InsertFirst(11);

    obj2.InsertLast(101);

    obj2.InsertAtPos(75,3);

    obj2.Display();
    iRet = obj2.Count();
    cout<<"Number of elements in LL are : "<<iRet<<"\n";

    obj2.DeleteAtPos(3);

    obj2.DeleteFirst();
    obj2.DeleteLast();

    obj2.Display();
    iRet = obj2.Count();
    cout<<"Number of elements in LL are : "<<iRet<<"\n";

    //Singly Circular Linked List
    SinglyCL <int>obj3;

    obj3.InsertFirst(51);
    obj3.InsertFirst(21);
    obj3.InsertFirst(11);

    obj3.InsertLast(101);

    obj3.InsertAtPos(75,3);

    obj3.Display();
    iRet = obj3.Count();
    cout<<"Number of elements in LL are : "<<iRet<<"\n";

    obj3.DeleteAtPos(3);

    obj3.DeleteFirst();
    obj3.DeleteLast();

    obj3.Display();
    iRet = obj3.Count();
    cout<<"Number of elements in LL are : "<<iRet<<"\n";

    //Stack
    Stack<int> s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Display();

    int value = s.Pop();
    cout << "Popped value: " << value << endl;
    s.Display();

    //Queue
    Queue<int> q;
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Display();

    value = q.Dequeue();
    cout << "Dequeued value: " << value << endl;
    q.Display();

    return 0;
}