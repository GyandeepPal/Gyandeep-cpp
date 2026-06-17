#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1) // Base case
        return 1;
    else
        return n * factorial(n - 1); // Recursive call
}

int main()
{
    int num = 5;
    cout << "Factorial = " << factorial(num);
    return 0;
}
