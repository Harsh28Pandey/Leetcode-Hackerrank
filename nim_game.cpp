#include<iostream>
using namespace std;

void nim_game(int num)
{
    if(num % 4 == 0)
    {
        cout << "Not Win the game";
    }
    else
    {
        cout << "Win the game";
    }
}

int main()
{
    int num;
    cout << " Enter the number:";
    cin >> num;
    nim_game(num);
    return 0;
}