
/* there are two types of header file
1. system header file : its comes with compiler*/
#include<iostream>
/*2. user header file : it is written by the user
#include"any name " === this name is present your directory*/
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the num1:"<<endl;   /* '<<' is called insertion operator */
    cin>>a;
    cout<<"enter the num2:"<<endl;  /* '>>' is called exteration operator */
    cin>>b;
    //arithmatic operator
     cout<<" increment two number is " <<a++<<endl;
    cout<<" add two number is " <<a+b<<endl;
    cout<<" sub two number is " <<a-b<<endl;
    cout<<" multi two number is " <<a*b<<endl;
    cout<<" divide two number is " <<a/b<<endl;
    cout<<" moduler two number is " <<a%b<<endl;
   
    cout<<" decrement two number is " <<a--<<endl;
    cout<<a<<endl;
    cout<<" add increment two number is " <<++a<<endl;
    cout<<" sub decrement two number is " <<--a<<endl;

    return 0;

}