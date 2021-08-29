#include<iostream>

using namespace std;
int main()
{
    // freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);
    int age;
    cout<<"tell me you age"<<endl;
    cin>>age;
    if(age<18)
    {
        cout<<"you are not enter the party"<<endl;
    }
    else if(age==18)
    {
    cout<<"you are a kid and you will get a kid pass to the party"<<endl;
    }
    else{
        cout<<"you can come to the party"<<endl;
    }
return 0;

}