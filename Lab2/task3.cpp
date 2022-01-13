#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double f(double);

int main() {
    double x;
    while (true) {
        cout << "Enter x: ";
        cin >> x;
        printf("f: %.4f\n", f(x));
    }
    return 0;
}

double f(double x) {
    return (sqrt(pow(3.0*x+2,2)-24.0*x))/(3.0*sqrt(x)-(2.0/sqrt(x)));
}