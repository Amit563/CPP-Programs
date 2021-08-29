#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float num[100],sum=0.0,average;
    cout<<"Enter the element:"<<endl;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cout<<i+1<<".Enter the number:";
        cin>> num[i];
        sum+=num[i];
    }
    average = sum/n;
    cout<<"average="<<average;
    return 0;
}