#include <iostream>

using namespace std;

class Queue
{
    int front, rear, size, *Q;
    public:
        Queue()
        {
            front=rear= -1;
            size = 10;
            Q = new int[size];
        }
        Queue(int size)
        {
            front=rear=-1;
            this->size=size;
            Q = new int[this->size;
        }
        void enqueue(int x);
        int dequeue();
        void display;
};

void Queue::enqueue(int x)
{
    if(rear == size-1)
        cout<<"Q Overflow"<<endl;
    else:
        Q[++rear] = x;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
