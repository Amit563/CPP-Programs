#include<iostream>

using namespace std;
int main()
{
    int i=1;
    cout<<"enter the number"<<endl;
    cin>>i;
    for(i=0;i<4;i++)
    {
        if(i==3)
        { 
        break;
        }
    cout<<i<<endl;
    }
    /*for(i=0;i<4;i++)
    {
        if(i==2)
        { 
        continue;
        }
    cout<<i<<endl;
    }*/
    return 0;
}