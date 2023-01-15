#include <iostream>
#include <cmath>
using namespace std;
main()
{
    string year;
    int holidays;
    int weekends;
    int sophia_weekends;
    float total_sophweekends;
    float free_holidays;
    float total;
    float leap_total;
    int rounded;
    cout<<"Enter the type of year whether leap or normal: ";
    cin>>year;
    cout<<"Enter the number of holidays: ";
    cin>>holidays;
    cout<<"Enter the number of weekends in for returning back to hometown: ";
    cin>>weekends;
    sophia_weekends=48-weekends;
    total_sophweekends=sophia_weekends*0.75;
    free_holidays=holidays*0.67;
    total=weekends+total_sophweekends+free_holidays;
    rounded=floor(total);
    if(year=="normal")
    {
        cout<<"He has played volleyball "<< rounded<<" times in a year";
    }
    if(year=="leap")
    {
        leap_total=total+(total*0.15);
        rounded=floor(leap_total);
        cout<<"He has played volleyball "<< rounded <<" times in a year";
    }



}