#include<bits/stdc++.h>
using namespace std;
int main()
{



    while(1)
        {
            int random;
    int guessnumber;
    cout<<"Enter your number :";
    cin>>guessnumber;
            random = 1+rand()%5;

         if(guessnumber==random)
     {

         cout<<"you have won " ;

     }
     else
        {
        cout<<"you lost , try again " ;
        cout<< "number is "<<random<<endl;
       }

        }


    return 0;
}
