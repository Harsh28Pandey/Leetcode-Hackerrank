#include<iostream>
using namespace std;

int product_sum(int n)
{
    int rem,sum = 0,pro = 1;
    while(n)
    {
        rem = n % 10;
        sum = sum + rem;
        pro = pro * rem;
        n = n / 10;
    }
    return abs(pro - sum);
}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << product_sum(n);
    return 0;
}