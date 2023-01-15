#include <iostream>
using namespace std;
main()
{
    float minutes;
    char service;
    char time;
    float amount;
    cout<<"Enter the R for regular service an P for premium service ";
    cin>>service;
    cout<<"Enter the number of minutes ";
    cin>>minutes;
    if(service=='P')
    {
        cout<<"Enter the D for day time service and N for night time service ";
        cin>>time;
        if(time=='D')
        {
            if(minutes>75)
            {
                amount=(minutes*0.10)+25;
                cout<<"The charges are $"<<amount;
            }
            else
            {
                amount=25;
                cout<<"The charges are $"<<amount;
            }

        }
        else if(time=='N')
        {
            if(minutes>100)
            {
                amount=(minutes*0.05)+25;
                cout<<"The charges are $"<<amount;
            }
            else
            {
                amount=25.0;
                cout<<"The charges are $"<<amount;
            }
        }
    }
    else if(service=='R')
    {
        if(minutes>50)
        {
            amount=(minutes*0.20)+10.0;
            cout<<"The charges are $"<<amount;
        }
        else
        {
            amount=10.0;
            cout<<"The charges are $"<<amount;
        }
    }
    else
    {
        cout<<"Invalid Character";
    }
}