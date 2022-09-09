#include<bits/stdc++.h>
using namespace std;
int main()
{
    int digit;
    cout<<"Choose one for Celsius to Fahrenheit"<<endl;
    cout<<"Choose two for Fahrenheit to Celsius"<<endl;
    cout<<"Choose three for Celsius to Calvin"<<endl;
    cin>>digit;

    switch(digit)
    {
    case 1:
        {
            float celsius;
        float Fahrenheit;

        cout<<"Enter Celsius :"<<endl;
        cin>>celsius;
        Fahrenheit = (1.8*celsius)+32;
        cout<<"Fahrenheit number is "<<Fahrenheit;
        break;
        }

    case 2:
        {
            float celsius;
        float Fahrenheit;

        cout<<"Enter Fahrenheit :"<<endl;
        cin>>Fahrenheit;
        celsius = (Fahrenheit-32)/1.8;
        cout<<"Celsius number is "<<celsius;
        break;
        }


    case 3:
        {

        float celsius;
        float kalvin;

        cout<<"Enter Celsius :"<<endl;
        cin>>celsius;
        kalvin = celsius+273;
        cout<<"Kalvin number is "<<kalvin;
        break;
        }



    }


}
