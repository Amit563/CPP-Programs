#include<iostream>

using namespace std;
int main()
{
    int roll;
    cout<<"Enter the two number"<<endl;
    cin>>roll;
    if(roll<1)
    {
        cout<<"invalid roll number"<<" "<<roll<<endl;;
    }
    else{
        cout<<"valid roll number"<<" "<<roll<<endl;
    }
        return 0;
    }