#include<bits/stdc++.h>
using namespace std;

 class Student
 {
 public:
    int id;
    int roll;
    void display()
    {
       cout<<"id is "<<id <<"  and roll is "<<roll;
    }
    void setValue(int x ,int y)
    {

        id =x;
        roll= y;
    }
 };
int main()
{
    Student st;
    st.setValue(2,3);
    st.display();


    return 0;
}
