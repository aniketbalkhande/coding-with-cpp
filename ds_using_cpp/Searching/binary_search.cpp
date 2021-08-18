#include<bits/stdc++.h> // cotain all the cp libraries
using namespace std;

int main() {
   int n;
   cin >> n;
   vector<int> v(n);
   for(int i=0; i<n; ++i){ 
      cin>>v[i];
   }
   int to_find;
   cout<<"enter element to find->";
   cin >> to_find;
   int lo=0, hi=n-1, mid;
   
   while(hi-lo > 1) { // log(n)
      int mid = (hi + lo) / 2;  
      if(v[mid] < to_find){
         lo = mid + 1;
      }else {
         hi=mid;
      }
   }
   if(v[lo] == to_find) {
      cout<< lo << endl;
   }else if(to_find == v[hi]) {
      cout<< hi << endl;
   }else {
      cout<<"not found"<<endl;
   }
   return 0;
}