#include <iostream>
using namespace std;
main()
{
    float budget;
    string ticket;
    int people;
    float trans_percent;
    float total_trans;
    float ticket_price;
    float total;
    cout<<"Enter the type of ticket: ";
    cin>>ticket;
    cout<<"Enter your budget: ";
    cin>>budget;
    cout<<"Enter the number of people: ";
    cin>>people;
    if(people>=1&&people<=4)
    {
        trans_percent=budget*0.75;
        total_trans=budget-trans_percent;
        if(ticket=="VIP")
        {
            ticket_price=499.99*people;
            total=total_trans-ticket_price;
            if(total_trans>=ticket_price)
            {
                cout<<"Yes! you have "<< total <<" QR left";
            }
            else if(total_trans<ticket_price)
            {
                total=ticket_price-total_trans;
                cout<<"Not enough money, you need "<< total <<" QR more";
            }
        }
        else if(ticket=="Normal")
        {
            ticket_price=249.99*people;
            total=total_trans-ticket_price;
            if(total_trans>=ticket_price)
            {
                cout<<"Yes! you have "<< total<<" QR left";
            }
            else if(total_trans<ticket_price)
            {
                total=ticket_price-total_trans;
                cout<<"Not enough money ,you need"<< total <<" QR more";
            }
        }


    }
    else if(people>=5&&people<=9)
    {
        trans_percent=budget*0.60;
        total_trans=budget-trans_percent;
        if(ticket=="VIP")
        {
            ticket_price=499.99*people;
            total=total_trans-ticket_price;
            if(total_trans>=ticket_price)
            {
                cout<<"Yes! you have "<< total <<" QR left";
            }
            else if(total_trans<ticket_price)
            {
                total=ticket_price-total_trans;
                cout<<"Not enough money, you need "<< total <<" QR more";
            }
        }
        else if(ticket=="Normal")
        {
            ticket_price=249.99*people;
            total=total_trans-ticket_price;
            if(total_trans>=ticket_price)
            {
                cout<<"Yes! you have "<< total<<" QR left";
            }
            else if(total_trans<ticket_price)
            {
                total=ticket_price-total_trans;
                cout<<"Not enough money ,you need"<< total <<" QR more";
            }
        }

     }
     else if(people>=10&&people<=24)
     {
        trans_percent=budget*0.50;
        total_trans=budget-trans_percent;
        if(ticket=="VIP")
        {
            ticket_price=499.99*people;
            total=total_trans-ticket_price;
            if(total_trans>=ticket_price)
            {
                cout<<"Yes! you have "<< total <<" QR left";
            }
            else if(total_trans<ticket_price)
            {
                total=ticket_price-total_trans;
                cout<<"Not enough money, you need "<< total <<" QR more";
            }
        }
        else if(ticket=="Normal")
        {
            ticket_price=249.99*people;
            total=total_trans-ticket_price;
            if(total_trans>=ticket_price)
            {
                cout<<"Yes! you have "<< total<<" QR left";
            }
            else if(total_trans<ticket_price)
            {
                total=ticket_price-total_trans;
                cout<<"Not enough money ,you need"<< total <<" QR more";
            }
        }

     }
     else if(people>=25&&people<=49)
     {
        trans_percent=budget*0.40;
        total_trans=budget-trans_percent;
        if(ticket=="VIP")
        {
            ticket_price=499.99*people;
            total=total_trans-ticket_price;
            if(total_trans>=ticket_price)
            {
                cout<<"Yes! you have "<< total <<" QR left";
            }
            else if(total_trans<ticket_price)
            {
                total=ticket_price-total_trans;
                cout<<"Not enough money, you need "<< total <<" QR more";
            }
        }
        else if(ticket=="Normal")
        {
            ticket_price=249.99*people;
            total=total_trans-ticket_price;
            if(total_trans>=ticket_price)
            {
                cout<<"Yes! you have "<< total<<" QR left";
            }
            else if(total_trans<ticket_price)
            {
                total=ticket_price-total_trans;
                cout<<"Not enough money ,you need"<< total <<" QR more";
            }
        }

     }
     else if(people>50)
     {
        trans_percent=budget*0.25;
        total_trans=budget-trans_percent;
        if(ticket=="VIP")
        {
            ticket_price=499.99*people;
            total=total_trans-ticket_price;
            if(total_trans>=ticket_price)
            {
                cout<<"Yes! you have "<< total <<" QR left";
            }
            else if(total_trans<ticket_price)
            {
                total=ticket_price-total_trans;
                cout<<"Not enough money, you need "<< total <<" QR more";
            }
        }
        else if(ticket=="Normal")
        {
            ticket_price=249.99*people;
            total=total_trans-ticket_price;
            if(total_trans>=ticket_price)
            {
                cout<<"Yes! you have "<< total<<" QR left";
            }
            else if(total_trans<ticket_price)
            {
                total=ticket_price-total_trans;
                cout<<"Not enough money ,you need"<< total <<" QR more";
            }
        }

     }


}