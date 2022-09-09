#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout<<"enter the  number of subject ";
    cin>>number;
    int arr[20];

    for(int i=0;i<number;i++)
    {
        cout<<"enter the subject number "<<i+1<< ":";
        cin>>arr[i];
    }
     cout<<"subjects numbers are "<<endl;
    for(int i=0;i<number;i++)
    {

        cout<<arr[i]<<endl;
    }
    int sumofnumbers =0;

    for(int i=0;i<number;i++)
    {

        sumofnumbers= sumofnumbers+arr[i];
    }
    cout<<"total number is : "<<sumofnumbers<<endl;


    float sum;
    sum=(sumofnumbers/number);
    if(sum>89){
        cout<<"you got A+"<<endl;
    }
    else if(sum>84){
        cout<<"You got A"<<endl;

    }
    else if(sum>79){
        cout<<"You got B+"<<endl;

    }
    else if(sum>74){
        cout<<"You got B"<<endl;

    }
    else if(sum>69){
        cout<<"You got C+"<<endl;

    }
     else if(sum>64){
        cout<<"You got C"<<endl;

    }
     else if(sum>59){
        cout<<"You got D+"<<endl;

    }
     else if(sum>49){
        cout<<"You got D"<<endl;

    }
    else{
        cout<<"you fail";
    }







}
