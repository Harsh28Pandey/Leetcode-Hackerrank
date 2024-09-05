#include<iostream>
#include<climits>
using namespace std;

int reverse_integer(int num)
{
    int rem,ans = 0;
    while(num != 0)
    {
        rem = num % 10;
        if(ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            return 0;
        }
        ans = ans * 10 + rem;
        num = num / 10;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    cout << "Reverse number is:" << reverse_integer(num);
    return 0;
}