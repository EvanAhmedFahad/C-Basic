#include<bits\stdc++.h>
using namespace std;


class person
{
    public:
    void display()
    {
        cout<<"into the person class"<<endl;
    }

};
class teacher : public person
{
    public:
    void display()
    {
        cout<<"into the teacher class"<<endl;
    }

};
class student :public person
{
    public:
    void display()
    {
        cout<<"into the student class:";
    }
};
int main()
{
     person p;
     p.display();
     teacher t;
     t.display();
     student s;
     s.display();

    return 0;
}
