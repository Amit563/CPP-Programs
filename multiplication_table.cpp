#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<n<<"x"<<i<<"="<<i*n<<endl;
    }
    return 0;
}