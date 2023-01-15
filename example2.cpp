#include <iostream>
using namespace std;
int number(int num1,int num2,int num3);
main()
{
    int num1;
    int num2;
    int num3;
    int result;
    cout<<"Enter a number ";
    cin>>num1;
    cout<<"Enter second number ";
    cin>>num2;
    cout<<"Enter third number ";
    cin>>num3; 
    result=number(num1,num2,num3);
    cout<<"The greatest number is "<< result;
}
int number(int num1,int num2,int num3)
{
    int greatest;
    if(num1>num2&&num1>num3)
    {
        greatest= num1;
    }
   else if(num2>num1&&num2>num3)
    {
        greatest= num2;

    }
    else if(num3>num1&&num3>num2)
    {
        greatest= num3;
    }
    return greatest;
    
}