#include<iostream>
using namespace std;
int main()
{
    int n,m,sum=0,r;
    cout<<"Enter the number"<<endl;
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;ṇ
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==m)
    cout<<"Amstrong number"<<endl;
    else
    cout<<"Not amstrong number"<<endl;
    return 0;

}