#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter two numbers:";
    cin>>num1>>num2;
       int large =num1>num2?num1:num2;
    cout<<"large number is "<<large;
    return 0;
}
