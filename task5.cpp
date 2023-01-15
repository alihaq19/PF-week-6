#include <iostream>
using namespace std;
float totalincome(string screen,int rows,int columns);
main()
{
string screen;
int rows;
int columns;
float result;
cout<<"Enter the screen in which you will watch the movie ";
cin>>screen;
cout<<"Enter the number of rows ";
cin>>rows;
cout<<"Enter the number of columns ";
cin>>columns;
result=totalincome(screen,rows,columns);
cout<<"The total income is "<< result <<" Euros ";
}
float totalincome(string screen,int rows,int columns)
{
    float total;
    if(screen=="Premiere")
    {
        total=rows*columns*12.0;
    }
    else if(screen=="Normal")
    {
        total=rows*columns*7.50;
    }
    else if(screen=="Discount")
    {
        total=rows*columns*5.00;
    }
    return total;
}