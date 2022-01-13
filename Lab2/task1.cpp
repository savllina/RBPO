#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    double result;
    while (true) {
        cout << "Enter x: ";
        cin >> x;
        result = (sqrt(pow(3.0*x+2,2)-24.0*x))/(3.0*sqrt(x)-(2.0/sqrt(x)));
        printf("result: %.4f\n", result);
    }
    return 0;
}