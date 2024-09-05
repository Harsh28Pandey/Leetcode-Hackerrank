#include<iostream>
using namespace std;

int double_number(int arr[],int num)
{
    int rem = 0;
    for(int i = 0; i < num; i ++)
    {
        rem = rem ^ arr[i];
    }
    return rem;
}

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    int arr[num];
    for(int i = 0; i < num; i ++)
    {
        cout << "Enter the array elements:";
        cin >> arr[i];
    }
    int answer = double_number(arr,num);
    cout << "The double number will be:" << answer;
    return 0;
}