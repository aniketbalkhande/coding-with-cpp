#include<iostream>
using namespace std;

int main(){
   int a=0, b=1;
   int n, c;
   cout<<"enter n"<<endl;
   cin>>n;
   cout<<a<<'\t'<<b<<'\t';
   for(int i=2;i<=n;i++) {
      c=a+b;
      a=b;
      b=c;
      cout<<c<<'\t';
   }
   return 0;  
} 