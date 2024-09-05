#include<iostream>
using namespace std;
int main()
{
    int n,i,k,temp;

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
    cout << "Enter the consecutive element upto which term:";
    cin >> k;

    int start = 0;
    int last = k - 1;

    for(start = 0; start <= last; start ++)
    {
        temp = a[start];
        a[start] = a[last];
        a[last] = temp;
        last --;
    } 
     
     cout << endl;
     cout << "New array elements" << endl;
     for(i = 0; i < n; i ++)
     {
        cout << " " << a[i];
     }

    return 0;
}