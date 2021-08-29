#include<iostream>
using namespace std;
enum day {mon=1,tue,wed,thu,fri,sat,sun};
enum dept {cs,civil,it,me,ec};

int main()
{
    day d;
    d =tue;
    dept dp;
    dp = cs;
    cout<<dp<<endl;
    cout<<tue<<endl;
    return 0;

}