
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int num[]={23,45,65,3,2};
    int value = 3;
    int position =-1;
    for(int i=0;i<6;i++)
    {
        if(value == num[i])
        {

            position=i+1;
            break;
        }
    }
    if(position==-1)
    {

        cout<<"not found ";
    }

    else{
        cout<<"the value is found at position "<<position;
    }

    return 0;

}
