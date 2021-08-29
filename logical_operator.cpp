#include <iostream>

using namespace std;
int main()
{
    int hour;
    cout << "Enter the hours" << endl;
    cin >> hour;
    if (hour >= 9 && hour <= 18)
    {
        cout << "workig" << endl;
    }
    else
    {
        cout << "Not working" << endl;
    }
    return 0;
}