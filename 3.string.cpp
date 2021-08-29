#include<iostream>
using namespace std;
int main()
{
    char s[50];
    cout<<"write the some paragraph"<<endl;
    //cin.get(s,50); same perform
    cin.getline(s,100);
    cout<<"welcome  "<<s<<endl;
    return 0;

}