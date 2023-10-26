#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    int row, col;
    int maxi=INT_MIN;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (arr[i][j] > maxi){
                maxi = arr[i][j];
                row = i;
                col = j;
            }
        }
        
    }
   cout << ++row << " "<<++col;
   



    
  

    return 0;
}