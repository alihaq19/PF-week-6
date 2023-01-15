#include <iostream>
using namespace std;
float product_price(string city,string product,int quantity);
main()
{
    string product;
    string city;
    int quantity;
    float result;
    cout<<"Enter the product: ";
    cin>>product;
    cout<<"Enter the city: ";
    cin>>city;
    cout<<"Enter the quantity: ";
    cin>>quantity;
   result= product_price( city, product, quantity);
   cout<<"The Price is "<< result;

}
float product_price(string city,string product,int quantity)
{
    float price;
    if(product=="coffee"&&city=="Sofia")
    {
        price=0.50*quantity;
    }
    else if(product=="coffee"&&city=="PlovDiv")
    {
        price=0.40*quantity;
    }
    else if(product=="coffee"&&city=="Varna")
    {
        price=0.45*quantity;
    }
    else if(product=="water"&&city=="Sofia")
    {
        price=0.80*quantity;
    }
    else if(product=="water"&&city=="PlovDiv")
    {
        price=0.70*quantity;
    }
    else if(product=="water"&&city=="Varna")
    {
        price=0.70*quantity;
    }
    else if(product=="beer"&&city=="Sofia")
    {
        price=1.20*quantity;
    }
    else if(product=="beer"&&city=="PlovDiv")
    {
        price=1.15*quantity;
    }
    else if(product=="beer"&&city=="Varna")
    {
        price=1.10*quantity;
    }
    else if(product=="sweets"&&city=="Sofia")
    {
        price=1.45*quantity;
    }
    else if(product=="sweets"&&city=="PlovDiv")
    {
        price=1.30*quantity;
    }
    else if(product=="sweets"&&city=="Varna")
    {
        price=1.35*quantity;
    }
    else if(product=="peanuts"&&city=="Sofia")
    {
        price=1.60*quantity;
    }
    else if(product=="peanuts"&&city=="PlovDiv")
    {
        price=1.50*quantity;

    }
   else if(product=="peanuts"&&city=="Varna")
    {
        price=1.55*quantity;
    } 
    return price;

}