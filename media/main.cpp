#include <iostream>

using namespace std;

class media
{
    protected:
        char title[20];
        float price;
    public:
        void get_media(void);
        virtual void display(void);
};
class book:public media
{
    protected:
        int pages;
    public:
        void get_book(void);
        void display(void);
};
class tape:public media
{
    protected:
        int time;
    public:
        void get_tape(void);
        void display(void);
};
void media::get_media(void)
{
    cout<<"Enter title & price";
    cin>>title>>price;
}
void media::display(void)
{
    cout<<"\nTitle:"<<title;
    cout<<"\nPrice:"<<price;
}
void book::get_book(void)
{
    cout<<"\nEnter number of pages:";
    cin>>pages;
}
void book::display(void)
{
    cout<<"\nPages:"<<pages;
}
void tape::get_tape(void)
{
    cout<<"\nEnter time";
    cin>>time;
}
void tape::display(void)
{
    cout<<"\nTime"<<time;
}
int main()
{
    media m,*p;
    book B;
    tape T;
    m.get_media();
    B.get_book();
    T.get_tape();

    p=&m;
    p->display();
    p=&B;
    p->display();
    p=&T;
    p->display();

    return 0;
}
