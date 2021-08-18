#include <iostream>
#include<stack>
#include<queue>
#include<vector>

using namespace std;
//STL ->
int main()
{
    vector<int> v;
    stack<int> s;
    queue<int> q;

    s.push(1);
    s.push(2);
    s.push(7);

    cout<<"stack capacity->"<<s.size()<<endl;
    cout<<"stack top->"<<s.top()<<endl;

    q.push(1);
    q.push(2);
    q.push(8);
    q.pop();

    cout<<"queue capacity->"<<q.size()<<endl;
    cout<<"queue top->"<<q.front()<<endl;

    v.push_back(1);
    v.push_back(2);

    cout<<"vector capacity->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"vector capaity->"<<v.capacity()<<endl;

    return 0;
}
