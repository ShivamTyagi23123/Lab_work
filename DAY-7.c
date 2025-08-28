"Q13-Write a program to input a year and check whether it is a leap year or not using conditional statements"

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}

"Q14-Write a program to input a character and check whether it is a vowel or consonant using if–else"

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        cout << ch << " is a vowel." << endl;
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        cout << ch << " is a consonant." << endl;
    else
        cout << "Invalid input." << endl;

    return 0;
}
