#include <iostream>
using namespace std;
int main() {
    float radius , area , circumference ;
    cout << "Enter radius: ";
    cin >> radius;
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    cout << "Area is  = " << area;
    cout << "\nCircumference is  = " << circumference;
    return 0;
}
