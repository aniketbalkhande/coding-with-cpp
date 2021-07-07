#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5,1);

    for(int i:a) {
        cout<<i<<" ";
    }cout<<endl;

    vector<int> b(a);//copy all element of a to b
    for(int i:b) {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;

    cout<<"Element at 2nd Index" <<v.at(2)<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
    cout<<"after clear capacity "<<v.capacity()<<endl;


    //v.capacity() : to get capacity
    //v.size() : to get size
    //v.front() : v[0]
    //v.push_back() : add element at back
    //v.push_front() : to add element at front
    //v.pop_front() : to remove element from front
    //v.pop_back() : to remove element from back
    //v.end() : to get last element
    //v.clear() : size become zero, but capacity remains as it is
    //v.begin() :  to get starting iterator
    //v.end() : to get end iterator

    return 0;
}
