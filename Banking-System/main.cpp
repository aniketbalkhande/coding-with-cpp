#include <iostream>

using namespace std;

class account
{
    private:
        float balance;
        float rate;
    public:
        account(); //constructor
        ~account();//destructor
        void deposit();
        void withdraw();
        void compound();
        void getbalance();
        void menu();
};
account::account()
{
    cout<<"enter initial balance\n";
    cin>>balance;
    cout<<"interest rate\n";
    cin>>rate;
}
account::~account()
{
    cout<<"data base has been deleted\n";
}
void account::deposit()
{
    float amount;
    cout<<"enter the amount:";
    cin>>amount;
    balance=balance+amount;
}
void account::withdraw()
{
    float amount;
    cout<<"how much to withdraw?\n";
    cin>>amount;
    if(amount<=balance)
    {
        balance = balance-amount;
        cout<<"amount drawn="<<amount<<endl;
        cout<<"current balance="<<balance<<endl;
    }
    else
        cout<<0;
}
void account::compound()
{
    float interest;
    interest=balance*rate;
    balance=balance+interest;
    cout<<"interest amount="<<interest<<endl;
    cout<<"total amount="<<balance<<endl;
}
void account::getbalance()
{
    cout<<"current balance=";
    cout<<balance<<endl;
}
void account::menu()
{
    cout<<"d->deposit"<<endl;
    cout<<"w->withdraw"<<endl;
    cout<<"c->compound interest"<<endl;
    cout<<"g->get balance"<<endl;
    cout<<"q->quit"<<endl;
    cout<<"option please?\n";
}
int main()
{
    class account acct;
    char ch;
    acct.menu();//menu function called
    while((ch=getchar())!='q')
    {
        switch(ch)
        {
            case 'd':
                acct.deposit();
                break;
            case 'w':
                acct.withdraw();
                break;
            case 'c':
                acct.compound();
                break;
            case 'g':
                acct.getbalance();
                break;
        }
    }
    return 0;
}
