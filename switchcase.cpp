#include<iostream>

using namespace std;

int main()
{
    int age;
     cout<<"enter the age "<<endl;
     cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are 18";
        break;
    case 23:
        cout<<"You are 22";
        break;
    case 34:
        cout<<" You are 34";
        break;
    default:
    cout<<"speical cases";
        break;
    }
    
   return 0;
}
