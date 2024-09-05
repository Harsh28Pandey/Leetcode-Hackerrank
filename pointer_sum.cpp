#include<iostream>
using namespace std;

void sum_diff(int * a,int * b)
{
    int sum = * a + * b;
    int diff = abs(* a - * b);
    cout << "The sum will be:" << sum << endl;
    cout << "The difference will be:" << diff;
}

int main()
{
    int a,b;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;
    sum_diff(&a,&b);
    return 0;
}