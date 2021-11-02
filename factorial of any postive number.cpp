#include <iostream>
using namespace std;

int main() {
    int n;
    long double fact = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.\nPlease enter a postive number";
    else {
        for(int i = 1; i <= n; ++i) {
            fact *= i;
        }
        cout << "Factorial of " << n << " = " << fact;
    }

    return 0;
}
