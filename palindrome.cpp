#include<iostream>
#include<climits>
using namespace std;

int palindrome(int num)
{
    if(num < 0)
    {
        return 0;
    }

    int rem,rev = 0;
    int x = num;

    while(x)
    {
        rem = x % 10;
        if(rev > INT_MAX / 10)
        {
            return 0;
        }
        rev = rev * 10 + rem;
        x = x / 2;
    };

    if(rev == num)
    {
        cout << "Palindrome number";
    }
    else
    {
        cout << "Not a Palindrome number";
    }
}

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    palindrome(num);
    return 0;
}