#include<iostream>
using namespace std;

char convert(char name)
{
    char ans;
    ans = name - 'a' + 'A';
    return ans;
}

int main()
{
    char name;
    cout << "Enter the small alphabet:";
    cin >> name;
    cout << "Capital alphabet will be:" << convert(name);
    return 0;
}