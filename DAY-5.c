"Q9-Write a program to calculate simple and compound interest for given principal, rate, and time"

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, time;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    // Simple Interest
    double simple_interest = (principal * rate * time) / 100.0;

    // Compound Interest
    double amount = principal * pow(1 + rate / 100.0, time);
    double compound_interest = amount - principal;

    cout << "Simple Interest = " << simple_interest << endl;
    cout << "Compound Interest = " << compound_interest << endl;

    return 0;


"Q10-Write a program to input time in seconds and convert it to hours:minutes:seconds format"

#include <iostream>
using namespace std;

int main() {
    int total_seconds;
    cout << "Enter time in seconds: ";
    cin >> total_seconds;

    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
    return 0;
}
