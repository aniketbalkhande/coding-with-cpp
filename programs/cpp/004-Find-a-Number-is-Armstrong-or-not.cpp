#include<iostream>
using namespace std;

void IsArmstrong(int n) {
   int temp = 0,rem;
   int sum=0;
   
  
   temp = n;

   while(n>0) { // n
      rem = n%10;
      sum = sum + rem*rem*rem;
      n/=10;
   }
  
   if(temp == sum)
      cout<<temp<<" is Armstrong"<<endl;
      
   
}

int main() {
   int upper_limit, lower_limit;
   cout<<"enter lower and upper limit"<<endl;
   cin>>lower_limit>>upper_limit;
   for(int i=lower_limit; i<=upper_limit; i++) {
      IsArmstrong(i);
   }

}
