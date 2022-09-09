#include<bits\stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int current=0,mxlen=0;
    while(1)
    {
        if(arr[i]==' '|| arr[i]=='\0')
        {
            if(current>mxlen)
            {
                mxlen=current;
            }
            current=0;
        }
        else
        current++;
        if(arr[i]=='\0')

            break;
            i++;




    }
    cout<<mxlen<<endl;

    return 0;
}
