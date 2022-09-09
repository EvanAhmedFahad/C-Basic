#include<bits/stdc++.h>
using namespace std;

int y = 20;
int x =40;//global variable

void display()
{
    cout<<"inside the display function x ="<<y <<endl;
}



int main()
{
    int x =10;//local variable
    cout<<"Inside the main function x ="<<::x <<endl;

    display();
    return 0;

}
