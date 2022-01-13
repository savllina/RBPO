#define _USE_MATH_DEFINES
#include <cmath>
double x;
double result;

void f() {
	
	result = (sqrt(pow(3.0*x+2,2)-24.0*x))/(3.0*sqrt(x)-(2.0/sqrt(x)));
}