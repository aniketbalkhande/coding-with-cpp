#include <iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("aniket");
    q.push("balkhande");
    q.push("mr");

    cout<<"size of queue->"<<q.size()<<endl;
    cout<<"first element"<<q.front()<<endl;
    q.pop();
    cout<<"first element after pop"<<q.front()<<endl;
    cout<<"size of queue->"<<q.size()<<endl;

    return 0;
}
