#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159265358979;
    int choice;
    double width, height, radius, base;
    double area;

    cout << "Geometry Calculator\n";
    cout << "\t1. Calculate the Area of Circle\n";
    cout << "\t2. Calculate the Area of Rectangle\n";
    cout << "\t3. Calculate the Area of Triangle\n";
    cout << "\t4. Quit\n\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // TODO
    if (choice == 1) {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        area = PI * radius * radius;
        cout << setprecision(2) << fixed;
        cout << "The area is " << area << endl;
    }

    else if (choice == 2){
    cout << "Enter the lenght and width of the rectangle: ";
    cin >> height >> width;
    area = height * width;
    cout << left << setprecision(2) << fixed;
    cout << "The area is " << area << endl;

    }
    else if (choice == 3){
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    area = height * width * 0.5;
    cout << left << setprecision(2) << fixed;
    cout << "The area is " << area << endl;
    }
    else if (choice == 4) {
        cout << "Program Stopped" << endl;
    }
    else {
        cout << "Wrong number" << endl;
    }
    return 0;
}
