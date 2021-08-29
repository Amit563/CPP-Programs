#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,r;
    int m;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==m){
        cout<<"palindrome";
    }
    else cout<<"not a palindrome";
}