#include <iostream>
using namespace std;

int main(){
    const float a = 3.14;
    cout << "Enter the radius: ";
    int r;
    cin >> r;
    cout << "The area is "<<a*r*r;
    return 0;
}