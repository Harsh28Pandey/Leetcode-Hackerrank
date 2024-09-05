#include<iostream>
using namespace std;

int bishop_moves(int a,int b)
{
    int count = 0;
     
    count = count + min(8 - a,8 - b);
    count = count + min(8 - a,b - 1);
    count = count + min(a - 1,b - 1);
    count = count + min(a - 1,8 - b);

    return count;
}

int main()
{
    int row,col;
    cout << "Enter the number of rows:";
    cin >> row;
    cout << "Enter the number of column:";
    cin >> col;
    int result = bishop_moves(row,col);
    cout << "Bishop moves " << result << " steps";
    return 0;
}