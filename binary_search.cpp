#include<iostream>
using namespace std;
int main()
{
    int A[]={6,8,13,17,20,25,28,30,35};
    int l=0,h=9,mid,key;
    cout<<"Enter the number"<<endl;
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
     if(key==A[mid])
     {
        cout<<"Found at"<<" "<<mid;
        return 0;

     }
     else if(key<A[mid]) h=mid-1;
     else l=mid+1;
    }
    cout<<"not found";
    return 0;


    
}