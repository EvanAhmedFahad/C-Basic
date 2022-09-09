#include<bits/stdc++.h>
using namespace std;
class student_Class
{
public:
    float id;
    double gpa;
    void display()
    {

        cout<<id <<" " <<gpa;
    }
    void setValue(int x, double y)
    {

        id = x;
        gpa = y;
    }

};
int main()
{

    student_Class fahad;
     fahad.setValue(22,3.99);
    fahad.display();




    return 0;
}
