#include <iostream>
using namespace std;
int main() {
    float num = 15.58971;
    int integral = (int)num;
    float fractional = num - integral;
    cout << "Integral part = " << integral << ", Fractional part = " << fractional;
    return 0;
}
