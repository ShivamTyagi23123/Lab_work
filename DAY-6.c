"Q11-Write a program to input an integer and check whether it is even or odd using if–else"

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }

    return 0;
}


"Q12-Write a program to input an integer and check whether it is positive, negative or zero using nested if–else."

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num >= 0) {
        if (num == 0) {
            cout << "The number is zero." << endl;
        } else {
            cout << "The number is positive." << endl;
        }
    } else {
        cout << "The number is negative." << endl;
    }

    return 0;
}
