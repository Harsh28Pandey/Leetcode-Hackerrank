#include<iostream>
using namespace std;

int power_of_2(int num)
{
    if(num < 1)
    {
        return 0;
    }
    while(num != 0)
    {
        if(num % 2 == 1)
            return 0;
        
        num =num / 2;
    }
    cout << "Power of 2";
}

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    power_of_2(num);
    return 0;
}