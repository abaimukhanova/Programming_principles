#include <iostream>
using namespace std;
int main(){
    int age;
    cin >> age;
    //до 6 дет садик, с 6 до 18 школьник, с 18 до 24 студень, с 24 работник
    if (age > 0 && age < 130){
        if (age < 6){
            cout << "Детский сад";
        }
        else if (age >= 6 && age <= 18){
            cout << "Школа";
        }
        else if (age > 18 && age <= 24){
            cout<<"студент";
        }
        else {
            cout << "Работник";
        }
    }
    else {
        cout << "Введите настоящий возраст";
    }

    return 0;
}