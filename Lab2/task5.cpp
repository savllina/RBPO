#include <iostream>
#include <cmath>

using namespace std;

double x;
double result;

void f();

int main() {
	while (true) {
		cout << "Enter x: ";
		cin >> x;
		f();
		printf("f: %.4f\n", result);
	}
	return 0;
}

void f() {
	result = (sqrt(pow(3.0*x+2,2)-24.0*x))/(3.0*sqrt(x)-(2.0/sqrt(x)));
}