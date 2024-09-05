#include<iostream>
using namespace std;

int trailing_zero(int num)
{
    int count = 0;
    while(num)
    {
        count = count + num / 5;
        num = num / 5;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    cout << trailing_zero(num);
    return 0;
}