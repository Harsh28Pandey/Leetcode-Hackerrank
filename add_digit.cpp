#include<iostream>
using namespace std;
int main()
{
    int n,r,rem,res=0,rev=0;
    int i;

    cout << "Enter the no.:";
    cin >> n;

    for(i = 0; i <= n; i  ++)
    {
        rem = n % 10;
        rev = rev + rem;
        n = n / 10;
    }
    cout << "the sum will be:" << rev << endl;

    for(i = 0; i <= rev; i ++)
    {
        r = rev % 10;
        res = res + r;
        rev = rev / 10;
    }
    cout << "The sum will be:" << res << endl;

    return 0;
}