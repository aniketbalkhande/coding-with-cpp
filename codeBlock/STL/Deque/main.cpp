#include <iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);


    for(int i:d){
        cout<<i<<" ";
    }
    d.pop_front();
    cout<<endl;

    for(int i:d) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Element at index 2: "<<d.at(1)<<endl;

    cout<<"front->"<<d.front()<<endl;
    cout<<"back->"<<d.back()<<endl;

    cout<<"Empty or not"<<d.empty()<<endl;

    cout<<"before erase"<<d.size()<<endl;
    d.erase(d.begin(),d.end());
    cout<<"after erase"<<d.size()<<endl;


    return 0;
}


//Deque : follow Last in First output_iterator_tag
//
