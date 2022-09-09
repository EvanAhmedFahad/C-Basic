
#include<bits/stdc++.h>
using namespace std;

void displayArray(int num[],int arrsize)
    {
        for(int i=0;i<arrsize;i++)
        {
            cout<<num[i]<< " ";
        }

    }
int main()
{
   int number[5]={1,2,39,47,5};

    displayArray(number,5);
    int n;
    cout<<"enter the number of array you wants : ";
    cin>>n

    int number1[n];


    for(int i=0;i<n;i++)
    {
      cin>>number1[i];
    }
    for(int i=0;i<n;i++)
    {
      cout<<number1[i];
    }




    return 0;
}
