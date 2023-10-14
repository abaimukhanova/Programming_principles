#include <iostream>
using namespace std;

int main(){
    int n = 3;
    int arr[3][3]={
        {1,2,3},
        {1,2,3},
        {1,2,3}
    };
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
            cout << arr[i][j]<<"";
            }
            else if (i > j){
                cout << arr[i][j];
            }
            else cout << "*";
        }
        cout << endl;
    }
  

    return 0;
}