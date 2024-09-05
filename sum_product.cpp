#include<iostream>
using namespace std;

int sum_product(int num)
{
    int rem,sum = 0,pro = 1;
    while(num)
    {
        rem = num % 10;
        sum = sum + rem;
        pro = pro * rem;
        num = num / 10;
    }
    return (pro - sum);
}

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    cout << sum_product(num);
    return 0;
}