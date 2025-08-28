Q7-Write a program to swap two numbers without using a third variable

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Swap without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:\n";
    cout << "a = " << a << "\nb = " << b << endl;
    return 0;

Q8-Write a program to find and display the sum of the first n natural numbers

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}
