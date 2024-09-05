#include<iostream>
using namespace std;

int main()
{
    int n,i,j,target;
    int x = 0;
    cout << "Enter the size of array:";
    cin >> n;
    int a[n];

    for(i = 0; i < n; i ++)
    {
        cout << "Enter the array elements:";
        cin >> a[i];
    }

    cout << "Enter the target element:";
    cin >> target;

    for(i = 0; i < n; i ++)
    {
        for(j = i + 1; j < n; j ++)
        {
            if((a[i] + a[j]) < target)
            {
                x ++;
            }
        }
    }
    cout << x;

    return 0;
}