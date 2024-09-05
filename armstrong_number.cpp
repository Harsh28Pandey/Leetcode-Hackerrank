#include<iostream>
#include<math.h>
using namespace std;

int count_digit(int num)
{
    int count = 0;
    while(num)
    {
        count ++;
        num = num / 10;
    }
    return count;
}

int armstrong(int num,int digit)
{
    int n = num,rem,ans = 0;
    while(n)
    {
        rem = n % 10;
        n = n / 10;
        ans = ans + pow(rem,digit);
    }
    if(ans == num)
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "Not Armstrong number";
    }
    return 0;
}

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    int digit = count_digit(num);
    cout << armstrong(num,digit);
    return 0;
}