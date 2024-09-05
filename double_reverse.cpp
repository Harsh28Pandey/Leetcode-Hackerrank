#include<iostream>
using namespace std;

int reverse(int n)
{
    int i,rem,rev=0;
    while(n)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}

void double_reversal(int n)
{
    int x = reverse(n);
    int y = reverse(x);

    if(y == n)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    double_reversal(n);
    return 0;
}