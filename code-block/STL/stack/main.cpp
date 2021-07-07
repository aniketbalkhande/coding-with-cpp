#include <iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("aniket");
    s.push("balkhande");
    s.push("Mr");

    cout<<"top element->"<<s.top()<<endl;

    s.pop();
    cout<<"top element after pop->"<<s.top()<<endl;

    cout<<"size of stack->"<<s.size()<<endl;

    cout<<"Empty or not->"<<s.empty()<<endl;

    return 0;
}
