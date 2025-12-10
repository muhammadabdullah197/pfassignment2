#include <iostream>
#define PI 3.14
using namespace std;
int main() {
    float area, radius;
    cout<<" Enter radius = ";
    cin>>radius;
    area = PI * radius * radius;
    cout << "Area = " <<area;
    return 0;
}
