#include <iostream>
using namespace std;
char grade(int marks);
main()
{
int marks;
char result;
cout<<"Enter your marks ";
cin>>marks;
result=grade(marks);
cout<<"Your grade is "<<result;
}
char grade(int marks)
{
    if(marks<50)
    {
        return 'F';
    }
    else if(marks>=50&&marks<=60)
    {
        return 'E';
    }
    else if(marks>=61&&marks<=70)
    {
        return 'D';
    }
    else if(marks>=71&&marks<=80)
    {
        return 'C';
    }
    else if (marks>=81&&marks<=85)
    {
        return 'B';
    }
    else if(marks>=85&&marks<=100)
    {
        return 'A';
    }
    return 0;
}