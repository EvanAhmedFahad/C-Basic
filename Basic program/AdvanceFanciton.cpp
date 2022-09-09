#include<bits\stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        ans+=x*y;
        x *=2;
        n /= 10;
    }
    return ans;
}
int octalToDecimal(int m)
{
    int ans=0;
    int x=1;
    while(m>0)
    {
        int y=m%10;
        ans+=x*y;
        x *=8;
        m /= 10;
    }
    return ans;

}
int main()
{
    cout<<"Choice any one:"<<endl;
    cout<<" one for binary to decimal :"<<endl;
    cout<<" two octal to decimal :"<<endl;
    int choice;
    cin>>choice;

    switch(choice)
    {
    case 1:{
        cout<<"enter any binary number :";
    int n;
    cin>>n;

        cout<<binaryToDecimal(n)<<endl;
    break;
    }
    case 2:
        {

            cout<<"enter any octal number :";
            int m;
          cin>>m;
            cout<<octalToDecimal(m)<<endl;
            break;
        }
        default:
        {
            cout<<"wrong ";
        }

    }




    return 0;
}
