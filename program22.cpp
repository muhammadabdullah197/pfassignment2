#include <iostream>
using namespace std;
int main() {
    int age;
    string name, gender;
    float height;
    cout << "Enter name, age, height, gender: ";
    cin >> name >> age >> height >> gender;
    cout << "Name: " << name << "\nAge: " << age << "\nHeight: " << height << "\nGender: " << gender;
    return 0;
}
