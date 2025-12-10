#include <iostream>
using namespace std;
int main() {
    int hours, minutes, seconds, total ;
    cout << "Enter hours : ";
    cin >> hours ;
    cout << "Enter minutes : ";
    cin >> minutes;
    cout << "Enter seconds : ";
    cin >> seconds;
    total = hours * 3600 + minutes * 60 + seconds;
    cout << "Total seconds = " << total;
    return 0;
}
    

