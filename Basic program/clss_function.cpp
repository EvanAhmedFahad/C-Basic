#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    void display()
    {
        cout<<"name is "<<name <<endl;
        cout<<"roll is "<<roll;
    }



};
int main()
{
    Student st;
    st.name= "fahad";
    st.roll = 001;
    st.display();







    getch();
}

