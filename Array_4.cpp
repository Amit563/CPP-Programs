#include<iostream>
using namespace std;
int main()
{
    int A[]={1,5,7,8,6};
    for(int &s:A)
    cout<<++s;
    return 0;
}