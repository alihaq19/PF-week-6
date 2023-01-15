#include <iostream>
using namespace std;
main()
{
    int date;
    string month;
    cout<<"Enter your date of birth ";
    cin>>date;
    cout<<"Enter the month of your birth ";
    cin>>month;
    if((date>=21&&month=="March")||(date<=19&&month=="April"))
    {
        cout<<"Your zodiac sign is Aries and its symbol is The Ram";
    }
    else if((date>=20&&month=="April")||(date<=20&&month=="May"))
    {
        cout<<"Your zodiac sign is Taurus and its symbol is The Bull";
    }
    else if((date>=21&&month=="May")||(date<=20&&month=="June"))
    {
        cout<<"Your zodiac sign is Gemini and its symbol is The twins ";
    }
    else if((date>=21&&month=="June")||(date<=22&&month=="July"))
    {
        cout<<"Your zodiac sign is Cancer and its symbol is The Crab ";
    }
    else if((date>=23&&month=="July")||(date<=22&&month=="August"))
    {
        cout<<"Your zodiac sign is Leo and its symbol is The Lion";
    }
    else if((date>=23&&month=="August")||(date<=22&&month=="September"))
    {
        cout<<"Your zodiac sign is Virgo and its symbol is The Virgin ";
    }
    else if((date>=23&&month=="September")||(date<=22&&month=="October"))
    {
        cout<<"Your zodiac sign is Libra and its symbol is The Scales";
    }
    else if((date>=23&&month=="October")||(date<=21&&month=="November"))
    {
        cout<<"Your zodiac sign is Scorpio and its symbol is The Scorpion";
    }
    else if((date>=22&&month=="November")||(date<=21&&month=="December"))
    {
        cout<<"Your zodiac sign is Saggitarius and its symbol is The Archer ";
    }
    else if((date>=22&&month=="December")||(date<=19&&month=="January"))
    {
         cout<<"Your zodiac sign is Capricorn and its symbol is The Goat";
    }
    else if((date>=20&&month=="January")||(date<=18&&month=="February"))
    {
        cout<<"Your zodiac sign is Aquarius and its symbol is The Water Bearer";
    }
    else if((date>=19&&month=="February")||(date<=20&&month=="March"))
    {
        "Your zodiac sign is Pisces and its symbol is The Fishes";
    }
    
}