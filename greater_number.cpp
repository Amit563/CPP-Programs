#include <iostream>
using namespace std;


int sum(int e,int f)
{
    return e+f;
}
int main()
{
    int a,b;
    cout << "Enter the 2 value" << endl;
    cin >> a >> b;
    cout<<sum(a,b)<<endl;
    // if (a > b && a > c)

    // {
    //     cout << "this is A greater number" << endl;
    // }

    // else if (b > a && b >> c)
    // {
    //     cout << "this is B greater number" << endl;
    // }
    // else
    // {
    //     cout << "C is greater" <<endl;
    // }
    return 0;
}