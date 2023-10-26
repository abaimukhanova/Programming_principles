#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1 = "monkey";
    string article = "The ";
    cout << article + str1 + " is so cute"<<endl;

    string str2 = "Hello! How are you? Good luck!";
    str2.erase(7, 5);
    cout << str2;
    
    

    return 0;
}