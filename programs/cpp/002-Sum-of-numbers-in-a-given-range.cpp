#include<iostream>
using namespace std;

int main() {
   int l,u, sum=0;
   cout<<"enter lower limit & upper limit->"<<endl;
   cin>>l>>u;

   for(int i=l; i<=u; i++) {
      sum+=i;
   }

   cout<<sum;

   return 0;
}