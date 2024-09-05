#include<iostream>
using namespace std;

int rectangle(int a,int b,int c,int d)
{
    if((a == b && c == d) ||(a == c && b == d) || (a == d && b == c))
    {
        cout << "It forms rectangle";
    }
    else
    {
        cout << "It does not form rectangle";
    }
    return 0;
}

int main()
{
    int a,b,c,d;
    cout << "Enter the first side a:";
    cin >> a;
    cout << "Enter the second side b:";
    cin >> b;
    cout << "Enter the third side c:";
    cin >> c;
    cout << "Enter the fourth side d:";
    cin >> d;
    rectangle(a,b,c,d);
    return 0;
}