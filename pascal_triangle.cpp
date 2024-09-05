#include<iostream>
using namespace std;

int pascal_triangle(int row)
{
    int x = 1;
    for(int i = 0; i < row; i ++)
    {
        for(int b = 1; b <= row - i; b ++)
        {
            cout << " ";
        }
        for(int j = 0; j <= i; j ++)
        {
            if(i == 0 || j == 0)
            {
                cout << x << " ";
            }
            else
            {
                x = x * (i - j + 1) / j;
                cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    int row;
    cout << "Enter the number of rows:";
    cin >> row;
    pascal_triangle(row);
    return 0;
}