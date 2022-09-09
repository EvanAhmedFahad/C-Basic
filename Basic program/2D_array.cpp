
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int num[2][3];
    for(int row=0;row<2;row++)
    {
        for(int col =0;col<3;col++)
        {
            cin>>num[row][col];
        }
    }
    for(int row=0;row<2;row++)
    {
        for(int col =0;col<3;col++)
        {
            cout<<num[row][col] <<" ";
        }
        cout<<endl;
    }




    return 0;

}
