#include <iostream>

using namespace std;
int main()
{

    int year;
    cout << "enter the year\n";
    cin >> year;

    if (year % 400 == 0)
    {
        cout << "this year is leapyear\n";
    }
    else if (year % 100 == 0)
    {

        cout << "this year ia not leap year";
    }
    else if (year % 4 == 0)
    {
        cout << "thia year is leap year";
    }
    else
    {
        cout << "this year is not leap year";
    }
    return 0;
}