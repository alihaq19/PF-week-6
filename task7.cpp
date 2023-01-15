#include <iostream>
using namespace std;
float lowestprice(float km,string time);
main()
{
float km;
string time;
float result;
cout<<"Enter the number of kilometers ";
cin>>km;
cout<<"Enter the time you are travelling ";
cin>>time;
result=lowestprice(km,time);
cout<<"The lowest price will be "<< result;
}
float lowestprice(float km,string time)
{
    float total;
    if(time=="day"&&km<20)
    {
        total=(km*0.79)+0.70;
    }
    else if(time=="night"&&km<20 )
    {
        total=(km*0.90)+0.70;
    }

     else if((time=="day"&&km>=100)||(time=="night"&&km>=100))
    {
        total=km*0.06;
    }
    else{
        total=km*0.09;
    }
    return total;
}