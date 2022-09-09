#include<bits/stdc++.h>
using namespace std;



void display(int *number)//formal parameter
{

    *number = 20;
}
int main()
{
    int x = 10;
    cout<<"before calling the function x = "<<x <<endl;
    display(&x);//actual parameter
    cout<<"after calling the function x = "<<x<<endl;





    return 0;
}
