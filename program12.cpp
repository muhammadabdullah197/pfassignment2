#include <iostream>
using namespace std;
int main() {
    const float pi = 3.14;
    float radius,volume,height;
    cout<<" Enter the radius =  ";
    cin>>radius;
    cout<<" Enter height =  ";
    cin>>height;
    volume = pi * radius * radius * height; 
    cout << "Volume = "<<volume;
    return 0;  
   }
