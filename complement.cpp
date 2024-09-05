#include<iostream>
using namespace std;

int complement(int num)
{
    if(num == 0)
    {
        return 1;
    }
    int rem,ans = 0,mul = 1;
    while(num)
    {
        rem = num % 2;
        rem = rem ^ 1;
        num = num / 2;
        ans = ans + rem * mul;
        mul = mul * 2;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    cout << complement(num);
    return 0;
}