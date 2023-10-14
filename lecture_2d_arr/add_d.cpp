#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (i+j == n-1 || i+j > n-1){
                cout << arr[i][j];
            }
            else cout << "*";
        }
        cout << endl;
    }

  

    return 0;
}