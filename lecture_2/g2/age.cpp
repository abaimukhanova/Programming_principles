#include <iostream>
using namespace std;

int main(){
    int age;
    cin >> age;
    
    if (age >= 0 && age <=100){
        if ( age < 3 ){
            cout << "Baby";
        }
        else if (age >=3 && age <6){
            cout << "Kindergarden";
        }
        else if (age >= 6 && age <18){
            cout << "School";
        }
        else if (age >=18 && age<23){
            cout << "Student";
        }
        else if (age >= 23 && age<=25){
            cout << "Master's DS";
        }
        else cout << "OLD";
    }
    else {
        cout << "Введите корректный возраст!";
    }
    return 0;
}