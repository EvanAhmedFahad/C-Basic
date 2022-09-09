#include<bits\stdc++.h>
using namespace std;

class Mobileuser
{
public:
    virtual void sendMessage() =0;

};
class Rahim : public Mobileuser
{
    public:
    void sendMessage()
    {

        cout<<"this is rahim";
    }

};



int main()
{
    Mobileuser *m;

   Rahim r;
   m=&r;
   m->sendMessage();


    return 0;
}
