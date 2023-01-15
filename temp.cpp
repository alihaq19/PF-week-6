#include <iostream>
using namespace std;
main()
{
    string temp;
    string humidity;
    string activity;
    cout<<"Enter the type of temperature ";
    cin>>temp;
    cout<<"Enter the type of humidity ";
    cin>>humidity;
    if(humidity=="dry"&&temp=="warm")
    {
        cout<<"Play tennis";
    }
    else if(temp=="warm"&&humidity=="humid")
    {
        cout<<"Swim";
    }
    else if(temp=="cold"&&humidity=="dry")
    {
        cout<<"Play basketball";
    }
    else if(temp=="cold"&&humidity=="humid")
    {
        cout<<"Watch TV";
    }
}