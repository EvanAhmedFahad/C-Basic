#include<bits/stdc++.h>
using namespace std;
class student_Class
{
public:
     int id;
     double gpa;
     void display()
     {

         cout<<id <<" " << gpa;
     }
     student_Class(int x , double y )
     {
         id=x;
         gpa = y;

     }



};
int main()
{

    student_Class fahad(202,3.88);
    fahad.display();





    return 0;
}
