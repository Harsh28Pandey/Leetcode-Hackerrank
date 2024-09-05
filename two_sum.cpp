#include<iostream>
using namespace std;
int main()
{
    int n,i,j,target;

    cout << "Enter the size of array:";
    cin >> n;
    int a[n];

    for(i = 0; i < n; i ++)
    {
        cout << "Enter the array elements:";
        cin >> a[i];
    }

    cout << "Old array elements" << endl;
    for(i = 0; i < n; i ++)
    {
        cout << " " << a[i];
    }

    cout << endl;
    cout << "Enter the target element:";
    cin >> target;

    for(i = 0; i < n; i ++)
    {
        for(j = i+1; j < n; j ++)
        {
            if(a[j] == target - a[i])
            {
                cout << "Indices of element are:" << i << " "<< "and" << " " << j << endl;
            }
        }
    }

    return 0;
}