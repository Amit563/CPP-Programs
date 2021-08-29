#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int v,u,a;
    float speed;
    cout<<"enter the initil value"<<endl;
    cin>>u>>v>>a;
    speed = (v*v-u*u)/(2*a);
    cout<<speed;
    return 0;

}