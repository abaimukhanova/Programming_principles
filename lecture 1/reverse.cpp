#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;//175
    int c3 = a % 10; //5
    int c2 = (a/10)%10;//7
    int c1 = a/100;//1
    cout <<c3<<c2<<c1;
    return 0;
}