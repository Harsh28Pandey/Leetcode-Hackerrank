#include<iostream>
using namespace std;
int main()
{
    int i,temp,rem,d,rev;
    int k = 6;
    int x,y;
    int count = 0;

    cout << "Enter the range of x:";
    cin >> x;
    cout << "Enter the range of y:";
    cin >> y;

    for(i = x; i <= y; i ++)
    {
        temp = i;
        rev = 0;
        while(temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 +rem;
            temp = temp /10;
            d = abs(i - rev);
        }
        if(d % k == 0)
        {
             cout << i << " ";
            count ++;
        }
    }
    cout << endl;
    cout << "The number of beautiful days:" << count << endl;

    return 0;
}