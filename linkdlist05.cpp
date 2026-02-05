#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try
    {
        if (age < 0)
        {
            throw -1; // negative age
        }
        else if (age < 18)
        {
            cout << "You cannot vote." << endl;
        }
        else if (age <= 120)
        {
            cout << "You can vote." << endl;
        }
        else
        {
            throw -2; // unrealistic age
        }
    }
    catch (int e)
    {
        if (e == -1)
        {
            cout << "Negative ages are not allowed." << endl;
        }
        else if (e == -2)
        {
            cout << "Age entered is unrealistic." << endl;
        }
    }

    return 0;
}