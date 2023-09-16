#include <iostream>
using namespace std;

int main(){
    //n - number of friends 
    //age - 
    //<21
    int n ;
    int age;
    cin >> n;
    while (n>0)
    {
        if (age < 21)
        {
            cout << "nelzya brat" << endl; 
        }
        else
        {
            cout << "beri brat" << endl;
        }
        n--;
    }

    return 0;
}