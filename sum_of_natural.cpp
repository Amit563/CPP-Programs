#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=1;i<=10;i++){
       // sum=sum+i;
        sum+=i;
        
        cout<<sum<<endl;
    }
    return 0;
}