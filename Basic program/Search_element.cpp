#include<bits\stdc++.h>
using namespace std;
int linearSearch(int arr[],int n, int key){
for(int i=0;i<=n;i++)
{
    if(arr[i]==key)
    {
        return i;
    }

}
return -1;
}
int main()
{
    cout<<"enter array number ";
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<=n;i++)
    {
      cin>>arr[i];
    }
    int key;
    cout<< "enter key for search ";
    cin>>key;
    cout<<"element found at index "<<linearSearch(arr,n, key)<<endl;




    return 0;
}
