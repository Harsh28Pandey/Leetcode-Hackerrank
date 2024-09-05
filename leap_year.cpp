#include<iostream>
using namespace std;

int leap_year(int num)
{
    if(num % 400 == 0)
    {
        cout << "Leap year";
    }
    else if(num % 4 == 0 && num % 100 != 0)
    {
        cout << "Leap year";
    }
    else
    {
        cout << "Not a Leap year";
    }
    return 0;
}

int main()
{
    int num;
    cout << "Enter the year:";
    cin >> num;
    leap_year(num);
    return 0;
}