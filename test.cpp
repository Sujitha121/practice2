#include <iostream>
#include <limits>  // for std::numeric_limits

#define PI 3.14159

using namespace std;
double calculateArea(double radius) {
    return PI * radius * radius;
}
double calculateCircumference(double radius) {
    return 2 * PI * radius;
