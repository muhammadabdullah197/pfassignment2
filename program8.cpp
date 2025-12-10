#include <iostream>
using namespace std;
int main() {
    float f;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;
    float Celsius;
    Celsius = 5.0/9 * (f - 32);
    cout << "Celsius = " << Celsius;
    return 0;
}
