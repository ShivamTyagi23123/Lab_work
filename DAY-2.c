"Q3-Write a program to calculate the area and perimeter of a rectangle given its length and breadth."

#include <iostream>
using namespace std;

int main() {
    double length, breadth;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;

    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
}


"Q4-Write a program to calculate the area and circumference of a circle given its radius."

#include <iostream>
const double PI = 3.14;

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    std::cout << "Area: " << area << std::endl;
    std::cout << "Circumference: " << circumference << std::endl;

    return 0;
}
