#include <iostream>
using namespace std;
int main() {
    int a , b , temp;
    cout<<" enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;
    temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << ", b = " << b;
    return 0;
}
