#include <iostream>
using namespace std;
int main() {
    float marks[5] , total = 0 ,average ;
    for ( int i=0; i<5; i++) {
    cout << "Enter marks of Subjct  " << i + 1 << ":" ;
    cin >> marks[i];
    total = total + marks[i];
    }
    average = total / 5 ;
    cout << "Total = " << total << "\nAverage = " <<average;
    return 0;
}
