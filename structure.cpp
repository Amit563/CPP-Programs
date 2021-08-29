#include<iostream>

using namespace std;

 struct employee
{
    int eID;
    char favchar;
    float salary;
} ;
int main()
{ 
struct employee ajeet;
ajeet.eID = 1;
ajeet.favchar = 'a';
ajeet.salary = 12000;
cout<<"ajeet is  eId" << ajeet.eID <<endl;
cout<<"ajeet is favirute charater salary " << ajeet.favchar<<endl;
cout<<"ajeet is " << ajeet.salary<<endl;
    return 0;

}