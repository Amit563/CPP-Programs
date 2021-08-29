#include<iostream>
using namespace std;
int main()
{
    int A[10],n=10,i,key;
    cout<<"Enter the number ten"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the search number";
    cin>>key;
    for(i=0;i<10;i++)
    {
        if(key==A[i])
        {
            cout<<"found at"<<" "<<key;
            return 0;
        }
    }
    cout<<"Not found";
    return 0;
} 