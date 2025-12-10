#include <iostream>
using namespace std;
int main() {
    int roll, pf, ic, cg;
    cout << "Enter Roll No: ";
    cin >> roll;
    cout << "Enter marks in PF, IC, CG: ";
    cin >> pf >> ic >> cg;
    int total = pf + ic + cg;
    float avg = total / 3.0;
    cout << "Total = " << total << "\nAverage = " << avg;
    return 0;
}
