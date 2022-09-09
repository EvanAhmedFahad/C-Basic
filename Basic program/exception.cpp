#include<bits\stdc++.h>
using namespace std;
int main()
{
    try
    {
     int a;
    int b;
    cout<<"enter first number : ";
    cin>>a;
    cout<<"enter second number :";
    cin>>b;
    if(b==0)
    {
        throw -1;
    }
    double result=(double )a/b;
    cout<<" the result is "<<result;
    }
    catch(int x)
    {
        cout<<"divide by 0 not possible"<<endl;
        cout<<"try again";

    }




    return 0;
}
