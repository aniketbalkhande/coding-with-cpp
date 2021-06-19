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
class marks
{
    protected:
        int m1,m2,m3;
    public:
        void in2()
        {
            cout<<"type 3 subjects marks:";
            cin>>m1>>m2>>m3;
        }
        void show2()
        {
            cout<<endl<<m1<<"\t"<<m2<<"\t"<<m3;
        }
};
class others
{
    protected:
        int sport,other;
    public:
        void in3()
        {
            cout<<"type sports and others marks:";
            cin>>sport>>other;
        }
        void show3()
        {
            cout<<"\t"<<sport<<"\t"<<other;
        }
};
class total:public student, public marks, public others
{
    protected:
        int total;
    public:
        void in()
        {
            in1();
            in2();
            in3();
            total = m1+m2+m3+sport+other;
        }
        void show()
        {
            show1();
            show2();
            show3();
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
