#include <iostream>
using namespace std;
string checkspeed(float speed);
main()
{
float speed;
string result;
cout<<"Enter the speed ";
cin>>speed;
result=checkspeed(speed);
cout<<result;

}
string checkspeed(float speed)
{
    string result;
    if(speed<=10)
    {
        result="slow";
    }
    else if(speed>10&&speed<=50)
    {
        result="average";
    }
    else if(speed>50&&speed<=150)
    {
        result="fast";
    }
    else if(speed>150&&speed<=1000)
    {
        result="ultra fast";
    }
    else
    {
        result="extremely fast";
    }
    return result;
}