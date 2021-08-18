#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> A= {12,13,6,4,3,7,1,2,9,5};
    vector<int> a(A);

    cout<<"before sort"<<endl;
    for(int i:a) {
        cout<<i<<" ";
    }cout<<endl;


    cout<<"a begin ->"<<a.front();
    cout<<"a end ->"<<a.back();
  /*  a.sort(a.front(), a.back());
    cout<<"after sort"<<endl;
    for(int i:a) {
        cout<<i<<" ";
    }cout<<endl;
    */
    int temp;
    for(int i=0;i<a.size()-1; i++){
        for(int j=0;j<a.size()-i-1; j++) {
            if(a[j]>a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<endl;
    cout<<"after bubble sort"<<endl;
    for(int i:a) {
        cout<<i<<" ";
    }

    // Take elements from RHS list
    // insert it into LHS list
    // LHS list is always sorted

    int LHS, RHS, element;
    for(RHS=1; RHS<A.size(); RHS++) {
        LHS = RHS-1;
        element = A[RHS];
        while(LHS>-1 && A[LHS]>element) {
            A[LHS+1] = A[LHS];
            LHS--;
        }
        A[LHS+1] = element;
    }

    cout<<endl;
    cout<<"after insertion sort"<<endl;
    for(int i:A) {
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}
