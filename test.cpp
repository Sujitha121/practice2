#include <iostream>
#include <limits>  // for std::numeric_limits

#define PI 3.14159

using namespace std;
double calculateArea(double radius) {
    return PI * radius * radius;
}
double calculateCircumference(double radius) {
    return 2 * PI * radius;
    }
void clearInput() {
    // Clear error flags and ignore rest of the input buffer
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
int main() {
    double radius;
    int choice;
do {
        cout << "\n=== Circle Calculator ===\n";
        cout << "1. Calculate Area\n";
        cout << "2. Calculate Circumference\n";
        cout << "3. Calculate Both\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 4) {
            cout << "Invalid input! Please enter a number between 1 and 4.\n";
            clearInput();
            continue;
        }

        if (choice == 4) {
            cout << "Exiting the program. Goodbye!\n";
            break;
        }

        cout << "Enter the radius of the circle: ";
        cin >> radius;
 if (cin.fail() || radius <= 0) {
            cout << "Invalid radius! Please enter a positive number.\n";
            clearInput();
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Area of the circle: " << calculateArea(radius) << endl;
                break;
            case 2:
                cout << "Circumference of the circle: " << calculateCircumference(radius) << endl;
                break;
            case 3:
                cout << "Area of the circle: " << calculateArea(radius) << endl;
                cout << "Circumference of the circle: " << calculateCircumference(radius) << endl;
                break;
        }

    } while (true);

    return 0;
}
