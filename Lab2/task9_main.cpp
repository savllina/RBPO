#define _USE_MATH_DEFINES
#include "alina.h"

using namespace std;

int main() {
    while (true) {
        cout << "Enter x: ";
        cin >> alina::x;
        alina::f();
        printf("f: %.4f\n", alina::result);
    }
    return 0;
}