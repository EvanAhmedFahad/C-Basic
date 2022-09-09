#include<bits/stdc++.h>
using namespace std;
class student_Class
{
    public:
    int id;
    double gpa;


};
int main()
{
    student_Class alim;
    student_Class fahad;
    fahad.gpa=3.40;
    alim.id = 20;
    alim.gpa =3.50;

    cout<<alim.id<<" "<<alim.gpa<<" "<<fahad.gpa;



    return 0;
}
