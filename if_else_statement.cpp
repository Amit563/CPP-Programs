#include <iostream>

using namespace std;
int main()
{
    int x, y, z;
    cout << "Enter the two number" << endl;
    cin >> x >> y;
    if (y == 0)
    {
        cout << "divide by zero" << endl;
    }
    else
    {
        z = x / y;
        cout << z << endl;
    }
    return 0;
}