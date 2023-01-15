#include <iostream>
using namespace std;
main()
{
    int x , y , h;
    cout<<"Enter the x coordinate: ";
    cin>>x;
    cout<<"Enter the y coordinate: ";
    cin>>y;
    cout<<"Enter h: ";
    cin>>h;
    if( (y > 0 && y < (1 * h)&& x>0) )
    {
        
        
        cout<<"Inside";
        
    }
    else if (y==0 || y==(1 * h) && (x<=(1 * h)||x>=(2 * h)))
    {
        cout<<"Border";
    }
    else if( (y >(1 * h)   && y<(4 *h)) && (x > (1 * h))&& x< (2 * h))
    {
        cout<<"Inside";
    }
    else if((y >=(1*h) && y <= (4*h)) && x == 1*h  )
    {
        cout<<"Border";
    }
    else if((y>=(1*h)&& y <= (4*h))&& x==2*h)
    {
        cout<<"Border";
    }
    else if(y==4 && (x>=(1*h)&& x<=(2*h)))
    {
        cout<<"Border";
    }
    else if((y>=(0*h)&&y<=(1*h))&&x==3*h)
    {
        cout<<"Border";
    }
    else
    {
        cout<<"Outside";
    }
}