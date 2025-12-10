#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float sides[3], a = 0, b = 0, c = 0 , s, area;
    for ( int i=0 ; i < 3 ; i++ ) {
    cout << "Enter side of triangle : " << i + 1 << " : ";
    cin >> sides[3];
}  a = sides[0];
    b = sides[1];
    c = sides[2];
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
   cout << "Area of triangle  = " << area ;
    return 0;
}
