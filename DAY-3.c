"Q5-Write a program to convert temperature from Celsius to Fahrenheit"

#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    return 0;
}

"Q6-Write a program to swap two numbers using a third variable"

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping:\n";
    cout << "a = " << a << "\nb = " << b << endl;
    return 0;
}
