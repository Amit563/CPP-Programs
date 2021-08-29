#include<iostream>

using namespace std;
int main()
{
    int m1,m2,m3,total;
    float avg;
    cout<<"Enter the mark"<<endl;
    cin>>m1>>m2>>m3;
    total = m1+m2+m3;
    avg = (total)/3;
    cout<<total<<endl;
    cout<<avg<<endl;
    if(avg>=60&&avg<=100)
    {
        cout<<"gread A"<<endl;
    }
    else if(avg>=50&&avg>60)
    {cout<<"gread B"<<endl;
    } 
    else{
        cout<<"fail";
    }
    
    return 0;



}