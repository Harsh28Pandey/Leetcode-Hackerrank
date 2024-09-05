#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int mul_of_5;

    cout << "Enter the no. of students:";
    cin >> n;
    int grade[n];

    for(i = 0; i < n; i ++)
    {
        cout << "Enter the grade of students:";
        cin >> grade[i];
    }

    cout << "The grading system of student" << endl;
    for(i = 0; i < n; i +)
    {
        cout << " " << grade[i];
    }

    for(i = 0; i < n; i ++)
    {
        mul_of_5 = ((grade[i] + 4) /5) * 5;
        if(grade[i] >= 38)
        {
            if(mul_of_5 - grade[i] < 3)
            {
                grade[i] = mul_of_5;
            }
        }
    }
    cout << endl;
    cout << "After grading system the grade of student:" << endl;
    for(i = 0; i < n; i ++)
    {
        cout << " " << grade[i];
    }

    return 0;
}