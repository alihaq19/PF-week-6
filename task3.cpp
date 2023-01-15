#include <iostream>
using namespace std;
string title(int age,char gender);
main()
{
    int age;
    char gender;
    string result;
    cout<<"Enter your age ";
    cin>>age;
    cout<<"Enter M for male and F for female ";
    cin>>gender;
    result=title(age,gender);
    cout<<"Your title is "<< result;
}
string title(int age,char gender)
{
    if(age>=16&&gender=='M')
    {
        return "Mr";
    }
   else if(age<16&&gender=='M')
    {
        return "Master";
    }
    else if(age>=16&&gender=='F')
    {
        return "Ms";
    }
    else if(age<16&&gender=='F')
    {
        return "Miss";
    }
    return 0;
}

