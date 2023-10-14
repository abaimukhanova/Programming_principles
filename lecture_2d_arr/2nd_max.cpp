#include <iostream>
#include <limits.h>
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
    int a, b = 0;
    int maxi = INT_MIN;
    int maxi2 = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j]> maxi){
                maxi2 = maxi;
                maxi = arr[i][j];
            }
            else if (arr[i][j] > maxi2 && arr[i][j] != maxi){
                maxi2 = arr[i][j];
            }
        }
        
    }
    if(maxi2 == INT_MIN) cout << 0;
    else cout << maxi2;



    
  

    return 0;
}