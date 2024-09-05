#include<iostream>
using namespace std;
int main()
{
    int n,k,i,sum=0;
    float avg;
    cout << "Enter the size of array:";
    cin >> n;
    int a[n];

    for(i = 0; i < n; i ++)
    {
        cout << "Enter the array elements:";
        cin >> a[i];
    }

    for(i = 0; i < n; i ++)
    {
        sum = sum + a[i];
    }

    cout << "The sum will be:" << sum << endl;
    avg = (float) sum / n;
    cout << "The average will be:" << avg << endl;

    return 0;
}