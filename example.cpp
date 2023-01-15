#include <iostream>
using namespace std;
main()
{
    int price;
    string brand;
    cout<<"Enter price ";
    cin>>price;
    cout<<"Enter the brand ";
    cin>>brand;
    if(price<=1500)
    {
        if(brand=="almirah")
        {
            cout<<"Good";
        }
        else
        {
            cout<<"Different brand";
        }
    }
    else
    {
        cout<<"Not good";
    }
}