#include <iostream>
using namespace std;
main()
{
    string name;
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float sub5;
    float total;
    float percentage;
    string grade;
    cout<<"Enter your name ";
    cin>>name;
    cout<<"Enter your marks in English ";
    cin>>sub1;
    cout<<"Enter your marks in Maths ";
    cin>>sub2;
    cout<<"Enter your marks in chemistry ";
    cin>>sub3;
    cout<<"Enter your marks in Social Science ";
    cin>>sub4;
    cout<<"Enter your marks in Biology ";
    cin>>sub5;
    total=sub1+sub2+sub3+sub4+sub5;
    percentage=(total/500)*100;
    if(percentage>=90&&percentage<=100)
    {
        grade="A+";
    }
    else if(percentage>=80&&percentage<=89)
    {
        grade="A";
    }
    else if(percentage>=70&&percentage<=79)
    {
        grade="B+";
    }
    else if(percentage>=60&&percentage<=69)
    {
        grade="B";
    }
    else if(percentage>=50&&percentage<=59)
    {
        grade="C";
    }
    else if(percentage>=40&&percentage<=49)
    {
        grade="D";
    }
    else if(percentage<40)
    {
        grade ="F";
    }
    cout<<name<<endl;
    cout<<"Your total marks are "<< total<<endl;
    cout<<"Your percentage is "<< percentage <<" %"<<endl;
    cout<<"Your grade is "<< grade <<endl;
}