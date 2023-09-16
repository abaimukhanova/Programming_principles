#include <iostream>
using namespace std;

int main(){
    //n - number of friends 
    //age - 
    //<21
    int n ;
    int age;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        if (age < 21)
        {
            cout << "nelzya brat" << endl; 
        }
        else
        {
            cout << "beri brat" << endl;
        }
        i++;
    }

    return 0;
}