#include<bits/stdc++.h>
using namespace std;
int main()
{
    int digit;
    while(digit!=0){


    float base;
    float height;

    cout<<"Choose One for area of triangle"<<endl;

    cout<<"Choose two for area of circle"<<endl;
    cout<<"Choose three for area of rectangle"<<endl;
    cout<<"Choose four for area of square "<<endl;
    cin>>digit;

     switch (digit)
     {
     case 1:
         {
             cout<<"Enter the base :"<<endl;
        cin>>base;
        cout <<"Enter the height :"<<endl;
        cin>>height;
        float area;
        area = 0.5*base*height;
        cout<<"Triangle area is "<<area<<endl;
        break;
         }

     case 2:
         {
              float r;
        cout<<"Enter the radius : "<<endl;
        cin>>r;
        float pi = 3.1416;
        float area1;
        area1 = pi*r*r;
        cout<<"Circle area is "<<area1<<endl;
        break;
         }

     case 3:
         {
               cout<<"Enter height : "<<endl;
        cin>>height;
        float weight;
        cout<<"enter weight : "<<endl;
        cin>>weight;
         float area2;
         area2 = height * weight;
         cout<< "Rectangle area is "<<area2<<endl;
         break;
         }

     case 4:
         {
             float lenght;
              cout<<"enter the length :"<<endl;
        cin>>lenght;

        float area3;
        area3 = lenght *lenght;
        cout<<"Square area is "<<area3<<endl;
        break;
         }



    }




     }
      return 0;

}
