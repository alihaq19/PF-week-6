#include <iostream>
using namespace std;
float discount(float amount,string day,string month);
main()
{
float amount;
string day;
string month;
float result;
cout<<"Enter the amount ";
cin>>amount;
cout<<"Enter the day ";
cin>>day;
cout<<"Enter the month ";
cin>>month;
result=discount(amount,day,month);
cout<<result;


}
float discount(float amount,string day,string month)
{
    float total;
    if(day=="sunday" && (month=="october" || month=="march" || month=="august"))
    {
        total=amount-amount*0.1;
    }
   
    else
    {
        total=amount;
    }
    return total;
}
