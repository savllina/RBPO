#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

void f(const double&, double&);

int main() {
    double x;
    double result;
    while (true) {
        cout << "Enter x: ";
        cin >> x;
        f(x, result);
        printf("f: %.4f\n", result);
    }
    return 0;
}


void f(const double& x, double& result) {
    result = (sqrt(pow(3.0*x+2,2)-24.0*x))/(3.0*sqrt(x)-(2.0/sqrt(x)));
}