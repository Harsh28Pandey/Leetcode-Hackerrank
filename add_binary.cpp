#include<iostream>
using namespace std;

int main()
{
    int i = 0,rem = 0,sum[100];
    long bin1,bin2;

    cout << "Enter the first binary number:";
    cin >> bin1;
    cout << "Enter the second binary number:";
    cin >> bin2;

    while(bin1 != 0 || bin2 != 0)
    {
        sum[i ++] = (bin1 % 10 + bin2 % 10 + rem) % 2;
        rem = (bin1 % 10 + bin2 % 10 + rem) / 2;
        bin1 = bin1 / 10;
        bin2 = bin2 / 10;
    }

    if(rem != 0)
    {
        sum[i ++] = rem;
    }
    -- i;

    cout << "Sum of two binary number is:";
    while(i >= 0)
    {
        cout << sum[i --];
    }

    return 0;
}