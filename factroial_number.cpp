#include<iostream>

using namespace std;
int main()
{
    int fact=1,n,i;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=1;i<=10;i++)
    {
        fact=fact*i;
    
        cout<<fact<<endl;
    }
//cout<<"factorial of"<<n<<"is"<<fact;
    
    return 0;   
     }