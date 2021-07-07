/* Linear-Queue Implementation */
/*
    LQ is a linear ds
    It follow FIFO property

    STACK Vs Q
        Stack - Removes most recently added item
        Q     - Removes least recently added item
    Main Components
    1) Container for items
    2) pointer to front
    3) pointer to rear

    Insertion performed from Rear
    Deletion performed from Front
    For Empty Q :- Front = Rear + 1
        Front is one step ahead of Rear
        So,
            Q()
            { Front = 0;
              Rear = -1;
            }

    Operations Performed :
    1) Initialize Q
    2) Insertion/Enqueue
    3) Deletion/Dequeue
    4) isFull
    5) isEmpty


    INIT(Q, Front, Rear)
        1: Front=0
        2: Rear=-1
        3: return

    Enqueue(Q, Front, Rear, Max, Item)
        1: if(Rear == Max-1)
            then display "Queue Overflow"
        2: else
            Q[++Rear] = Item  // Insertion is done form rear
        3: return

    Dequeue(Q, Front, Rear, Item)
        1: if(Front = Rear+1)
            then display "Queue Underflow"
        2: else
            Item = Q[Front++]  // Deletion is done from front
        3: return

    IsFull(Q, Front, Rear, Full, Max)
        1: if(Rear == Max-1)
            then full=1
        2: else
            full = 0
        3: return full

    IsEmpty(Q, Front, Rear, Empty, Max)
        1: if(Front == Rear+1)
            then Empty = 1
        2: else
            Emtpy = 0
        3: return Empty



    Drawbacks LQ:
        We can't insert items into queue even if there is space in the Q.

*/



#include <iostream>

using namespace std;

#define MAX 5

class Q
{
    int front, rear;
    int ele[MAX];

    public:
        Q() // cunstructor
        {
            front=0;
            rear=-1;
        }
        int isFull();
        int isEmpty();
        void insertQ(int item);
        int deleteQ(int *item);
};
int Q::isFull()
{
    int full = 0;
    if(rear == MAX-1)
        full=1;

    return full;
}
int Q::isEmpty()
{
    int empty = 0;
    if(front==rear+1)
        empty = 1;

    return empty;
}
void Q::insertQ(int item)
{
    if(isFull())
    {
        cout<<"\n Queue Overflow"<<endl;
        return;
    }

    ele[++rear]=item;
    cout<<"\n Inserted valu: "<<item;
}
int Q::deleteQ(int * item)
{
    if(isEmpty())//Enter: 1, Skip : 0
    {
        cout<<"\n Underflow "<<endl;
        return -1;
    }
    *item = ele[front++];
    return 0;
}
int main()
{
    int item = 0;
    Q obj = Q();
    obj.insertQ(10);
    obj.insertQ(20);
    obj.insertQ(30);
    obj.insertQ(40);
    obj.insertQ(50);

    cout<<endl;

    if(obj.deleteQ(&item) == 0)
        cout<<"\n Deleted item : "<<item<< endl;
    if(obj.deleteQ(&item) == 0)
        cout<<"\n Deleted item : "<<item<< endl;
    if(obj.deleteQ(&item) == 0)
        cout<<"\n Deleted item : "<<item<< endl;
    if(obj.deleteQ(&item) == 0)
        cout<<"\n Deleted item : "<<item<< endl;
    if(obj.deleteQ(&item) == 0)
        cout<<"\n Deleted item : "<<item<< endl;

    return 0;
}
