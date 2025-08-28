"Q3-Write a program to calculate the area and perimeter of a rectangle given its length and breadth."

#include <iostream>

int main() {
    double length, breadth;
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter breadth: ";
    std::cin >> breadth;

    std::cout << "Area: " << (length * breadth) << "\n";
    std::cout << "Perimeter: " << (2 * (length + breadth)) << "\n";

    return 0;
}


"Q4-Write a program to calculate the area and circumference of a circle given its radius."

#include <cstdio>

int main() {
    const double PI = 3.14;
    double radius;
    printf("Enter radius: ");
    scanf("%lf", &radius);

    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}
