#include <iostream>

using namespace std;

class student
{
    private:
        char name[20];
        int roll;
    public:
        void input()
        {
            cout<<"type student name and roll number:";
            cin>>name>>roll;
        }
        void show()
        {
            cout<<endl<<"Name:"<<name<<"\t"<<"Roll No:"<<roll;
        }
};
class marks:public student
{
    private:
        int m1,m2,m3,total;
        double avg;
    public:
        void in()
        {
            input();
            cout<<"type 3 subjects marks:";
            cin>>m1>>m2>>m3;
            total=m1+m2+m3;
            avg=total/3;
        }
        void out()
        {
            show();
            cout<<endl<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<total<<"\t"<<avg;
        }
};
int main()
{
    class marks m;
    m.in();
    m.out();
    return 0;
}
