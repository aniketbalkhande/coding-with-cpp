#include <iostream>

using namespace std;
class student
{
    protected:
        char name[20];
        int roll;
    public:
        void in1()
        {
            cout<<"type name and roll no:";
            cin>>name>>roll;
        }
        void show1()
        {
            cout<<endl<<name<<"\t"<<roll;
        }
};
class marks:public student
{
    protected:
        int m1,m2,m3;
    public:
        void in2()
        {
            cout<<"type 3 subject marks";
            cin>>m1>>m2>>m3;
        }
        void show2()
        {
            cout<<endl<<m1<<"\t"<<m2<<"\t"<<m3;
        }
};
class total:public marks
{
    protected:
        int total;
    public:
        void in()
        {
            in1();
            in2();
            total=m1+m2+m3;
        }
        void show()
        {
            show1();
            show2();
            cout<<endl<<total;
        }
};
int main()
{
    class total t;
    t.in();
    t.show();
    return 0;
}
