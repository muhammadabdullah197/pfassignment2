#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    cout << "Discriminant = " << (b * b - 4 * a * c);
    return 0;
}
