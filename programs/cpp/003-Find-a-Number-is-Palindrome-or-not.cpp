/*
A palindrome number means  reverse of a number and original number both
are equal,so given number is Palindrome
STEPS:
1] Find reverse using while loop 
2] Then check if original no. == reverse.
*/


#include<iostream>
using namespace std;

// TIME: O(N) or O(log(N))
void StringIsPalindrome();
void IntegerIsPalindrome();
int main() {

   while(1) {
      int choose = 0;
      cout<<endl<<endl;
      cout<<"Choose The Option"<<endl;
      cout<<"1. Check String "<<endl;
      cout<<"2. Check Number "<<endl;
      cout<<"3. exit. "<<endl;
      cin>>choose;

      switch (choose)
      {
      case 1:
         StringIsPalindrome();
         break;

      case 2:
         IntegerIsPalindrome();
         break;
      case 3:
         exit;
        
      }
   }
   return 0;
}

void StringIsPalindrome() {
   string s;
   bool palindrome = true;
   
   cout<<"OPTION 2:"<<endl; 
   cout<<"enter a string to check palindrome: "<<endl;
   cin>>s;
   
   //two pointer approach
   int front=0;
   int back=s.length()-1;

   while(front<back) { //(n)/2
      if(s[front] != s[back]) {
         palindrome = false;
      }
      front++; back--;
   }

   if(palindrome == true)
      cout<<s<<" is pallindrome"<<endl;
   else 
      cout<<s<<" is not pallindrome"<<endl;
   
   return ;
}

void IntegerIsPalindrome(){
   int n;
   int temp = 0,rem;
   int reverse=0;
   cout<<"OPTION 2"<<endl;
   cout<<"enter a number to check palindrome: "<<endl;
   cin>>n;
   temp = n;

   while(n>0) { // n
      rem = n%10;
      reverse = reverse*10 + rem;
      n/=10;
   }
  
   if(temp == reverse)
      cout<<temp<<" is pallindrome"<<endl;
   else 
      cout<<temp<<" is not pallindrome"<<endl;
   
   return ;
}
