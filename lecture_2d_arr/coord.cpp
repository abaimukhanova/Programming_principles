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
    int a, b = 0;
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j]> maxi){
                maxi = arr[i][j];
                a = i;
                b = j;
            }
           
        }
        
    }
    cout << a << " "<<b;
    



    
  

    return 0;
}