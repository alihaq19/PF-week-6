#include <iostream>
using namespace std;
main()
{
    string month;
    int days;
    float pers;
    float pera;
    float stotal;
    float atotal;
    float sdis;
    float adis;
    cout<<"Enter the month in which you will be staying in the hotel: ";
    cin>>month;
    cout<<"Enter the number of days you will be staying: ";
    cin>>days;
    //may and october more than 7+less than 14
    if((month=="May"||month=="October")&&(days>7&&days<=14))
    {
        stotal=days*50;
        pers=stotal*0.05;
        sdis=stotal-pers;
        atotal=days*65;
        cout<<"The price for studio is $"<<sdis<<endl;
        cout<<"The price for apartment is $"<<atotal; 
    }
    //may and october less than 7
    else if((month=="May"||month=="October")&&(days<=7))
    {
        stotal=days*50;
        atotal=days*65;
        cout<<"The price for studio is $"<<stotal<<endl;
        cout<<"The price for apartment is $"<<atotal; 
    }
    //may and october more than 14
    else if((month=="May"||month=="October")&&(days>14))
    {
        stotal=days*50;
        pers=stotal*0.3;
        sdis=stotal-pers;
        atotal=days*65;
        pera=atotal*0.1;
        adis=atotal-pera;
        cout<<"The price for studio is $"<<sdis<<endl;
        cout<<"The price for apartment is $"<<adis; 
    }
    //september and june more than 14
    else if((month=="September"||month=="June")&&(days>14))
    {
        stotal=days*75.20;
        pers=stotal*0.2;
        sdis=stotal-pers;
        atotal=days*68.70;
        pera=atotal*0.1;
        adis=atotal-pera;
        cout<<"The price for studio is $"<<sdis<<endl;
        cout<<"The price for apartment is $"<<adis; 

    }
    //september and june less than 14
    else if((month=="September"||month=="June")&&(days<=14))
    {
        stotal=days*75.20;
        atotal=days*68.70;
        cout<<"The price for studio is $"<<stotal<<endl;
        cout<<"The price for apartment is $"<<atotal; 
    }
    //july and august more than 14
    else if((month=="July"||month=="August")&&(days>14))
    {
        stotal=days*76;
        atotal=days*77;
        pera=atotal*0.1;
        adis=atotal-pera;
        cout<<"The price for studio is $"<<stotal<<endl;
        cout<<"The price for apartment is $"<<adis; 
    }
    // july and august less than 14
    else if((month=="July"||month=="August")&&(days<=14))
    {
        stotal=days*76;
        atotal=days*77;
        cout<<"The price for studio is $"<<stotal<<endl;
        cout<<"The price for apartment is $"<<atotal; 

    }
}