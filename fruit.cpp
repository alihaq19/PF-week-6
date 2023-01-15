#include <iostream>
using namespace std;
main()
{
    string fruit;
    float quantity;
    string day;
    float price;
    cout<<"Enter the fruit you want to buy : ";
    cin>>fruit;
    cout<<"Enter the day you want to buy the fruit: ";
    cin>>day;
    cout<<"Enter the number of "<< fruit <<" you want to buy: ";
    cin>>quantity;
    if(fruit=="banana"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"))
    {
        price=quantity*2.50;
        cout<<"The total price is "<< price;
    }
    else if(fruit=="banana"&&(day=="Saturday"||day=="Sunday"))
    {
        price =quantity*2.70;
        cout<<"The total price is "<< price;
    }
    else if(fruit=="apple"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"))
    {
        price=quantity*1.20;
        cout<<"The total price is "<< price;
    }
    else if(fruit=="apple"&&(day=="Saturday"||day=="Sunday"))
    {
        price=quantity*1.25;
        cout<<"The total price is "<< price;
    }
    else if(fruit=="orange"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"))
    {
        price=quantity*0.85;
        cout<<"The total price is "<< price;
    }
    else if(fruit=="orange"&&(day=="Saturday"||day=="Sunday"))
    {
        price=quantity*0.90;
        cout<<"The price is "<< price;
    }
    else if(fruit=="grapefruit"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"))
    {
        price=quantity*1.45;
        cout<<"The total price is "<< price;
    }
    else if(fruit=="grapefruit"&&(day=="Saturday"||day=="Sunday"))
    {
        price=quantity*1.60;
        cout<<"The total price is "<< price;
    }
    else if(fruit=="kiwi"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"))
    {
        price=quantity*2.70;
        cout<<"The total price is "<< price;
    }
    else if(fruit=="kiwi"&&(day=="Saturday"||day=="Sunday"))
    {
        price=quantity*3.00;
        cout<<"The total price is "<< price;
    }
    else if(fruit=="pineapple"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"))
    {
        price=quantity*5.50;
        cout<<"The total price is "<< price;
    }
    else if(fruit=="pineapple"&&(day=="Saturday"||day=="Sunday"))
    {
        price=quantity*5.60;
        cout<<"The total price is "<< price;
    }
    else if(fruit=="grapes"&&(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"))
    {
        price=quantity*3.85;
        cout<<"The total price is "<< price;
    }
    else if(fruit=="grapes"&&(day=="Saturday"||day=="Sunday"))
    {
        price=quantity*4.20;
        cout<<"The total price is "<< price;
    }
    else
    {
        cout<<"Error";
    }
}