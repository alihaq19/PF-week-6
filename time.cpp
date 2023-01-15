
#include <iostream>
using namespace std;

/*Function prototype to convert hours into minutes.*/
int convert_to_mins(int);

main()
{
    int starting_hour, starting_minute;     /* Exam starting time. */
    int arrive_hour, arrive_minute;         /* Student arrival time. */
    int total_Sminutes;
    int total_Aminutes;
    int total_minutes;
    int total_minutes_late;

    cout<<"Enter the starting time in hours: ";
    cin>>starting_hour;
    cout<<"Enter the starting time in minutes: ";
    cin>>starting_minute;
    cout<<"Enter the arrival time in hours: ";
    cin>>arrive_hour;
    cout<<"Enter the arrival time in minutes: ";
    cin>>arrive_minute;
    
    total_Sminutes = convert_to_mins(starting_hour) + starting_minute;
    total_Aminutes = convert_to_mins(arrive_hour) + arrive_minute;

    total_minutes = total_Sminutes - total_Aminutes;
    total_minutes_late = total_Aminutes - total_Sminutes;

    /*If the student arrives exactly at the exam starting time or upto 30 minutes earlier. */
    if( (total_minutes <= 30) || (total_minutes == 0) )
    {
        if(total_minutes >= 0)
        {
            cout<<"On time, "<< total_minutes<< " minutes before the start ";
        }     
    }

    if(total_minutes_late > 0)
    {
        int  hours  = total_minutes_late  /  60;
        int minutes = total_minutes_late - (hours * 60);
        if(hours == 0)
        {
            cout<<"late "<< minutes << " minutes after the start";

        }
        else
        {
            cout<<"late "<< hours <<" :"<< minutes << " hours after the start";
        }  
    }
       
    if(total_minutes > 30)
    {
        int hours = total_minutes / 60;
        int minutes = total_minutes - (hours * 60);
        if(hours == 0)
        {
            cout<<"early "<< minutes << " minutes before the start";

        }
        else
        {
            cout<<"early "<< hours <<" :"<< minutes << " hours before the start";
        }

    }

    return 0;
}

int convert_to_mins(int hours)
{
    return (hours * 60);
}