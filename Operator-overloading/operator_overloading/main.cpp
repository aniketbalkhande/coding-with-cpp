#include <iostream>

using namespace std;

class counter
{
    private:
        int count;
    public:
        counter(){ count = 0; }
        int get_count(){return count; }
        //void operator++(){count++;}
};
int main()
{
    counter C1, C2;
    cout<<"C1="<<C1.get_count();
    cout<<"C2="<<C2.get_count();
    C1++;
    C2++;
    ++C2;
    cout<<"C1="<<C1.get_count();<<endl;
    cout<<"C2="<<C2.get_count();<<endl;
    return 0;
}
