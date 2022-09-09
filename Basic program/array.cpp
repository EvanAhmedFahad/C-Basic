#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    int arr[10];

     for(int i=0;i<5;i++)
     {
         cout<< "Enter student mark for subject "<<i+1<<" :";
         cin>>arr[i];

     }



     for(int i=0;i<5;i++)
     {
         cout<< "student mark for subject "<<i+1<<" :";
         cout<<arr[i]<<endl;

     }

     int sum = 0;
     for(int i=0;i<5;i++)
     {

         sum=sum+arr[i];
     }
     cout<<"total marks is "<<sum<<endl;

     float average;
      average =sum/5;
      cout<<"average marks is :"<<average <<endl;

      int max = arr[0];
      for(int i=0;i<5;i++)
      {
          if(max<arr[i])
          {
              max=arr[i];
          }

      }
       int min = arr[0];
      for(int i=0;i<5;i++)
      {
          if(min>arr[i])
          {
              min=arr[i];
          }

      }
      cout<<"maximum number is :"<<max<<endl;
      cout<<"minimum numbers is :"<<min;





    return 0;
}
