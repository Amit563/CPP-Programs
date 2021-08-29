#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    float a,c,b,root1,root2;
    cout<<"enter the number";
    cin>>a>>b>>c;
    root1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    root2 = (-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<root1<<endl;
    cout<<root2<<endl;
    return 0;
}