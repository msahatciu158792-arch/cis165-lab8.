#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double PI = 3.14159;
    int choice;
    double radius;
    double length;
    double width;
    double base;
    double height;
    double area;

    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the radius: ";
            cin >> radius;

            if (radius < 0) {
                cout << "Error: Dimensions cannot be negative." << endl;
            } else {
                area = PI * radius * radius;
                cout << fixed << setprecision(5);
                cout << "Area of circle: " << area << endl;
            }
            break;

        case 2:
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the width: ";
            cin >> width;

            if (length < 0 || width < 0) {
                cout << "Error: Dimensions cannot be negative." << endl;
            } else {
                area = length * width;
                cout << fixed << setprecision(5);
                cout << "Area of rectangle: " << area << endl;
            }
            break;

        case 3:
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the height: ";
            cin >> height;

            if (base < 0 || height < 0) {
                cout << "Error: Dimensions cannot be negative." << endl;
            } else {
                area = base * height * 0.5;
                cout << fixed << setprecision(5);
                cout << "Area of triangle: " << area << endl;
            }
            break;

        case 4:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Error: Invalid choice. Please enter a number from 1 to 4." << endl;
            break;
    }

    return 0;
}
