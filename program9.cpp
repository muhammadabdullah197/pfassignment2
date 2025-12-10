#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;
    if (a > b && a > c && a > d) {
cout <<" Maximum = "<<a;
} else if ( b > a && b > c && b > d) {
cout<<" Maximum  = "<<b;
} else if ( c > a && c > b && c > d) {
cout<<" Maximum =  "<<c;
}else {
cout<<" Maximum = "<<d;
}
    return 0;
}
