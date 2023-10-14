#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;

    int arr[n][m];

    int rows[n];
    int col[m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    

    for(int i = 0; i < n; i++){
        rows[i]=0;
        for(int j = 0; j < m; j++){
            rows[i] += arr[i][j];
        }
        
    }

    for (int j = 0;  j < m; j++){
        col[j]=1;
        for (int i =0; i < n; i++){
            col[j] = col[j]*arr[i][j];
        }
    }
    for(int i =0; i < n; i++){
        cout <<"The sum of row "<<i+1<<" is "<<rows[i]<<endl;
    }
    for(int j= 0; j < m; j++){
        cout << "The product of column "<< j+1<< " is "<< col[j]<<endl;
    }
   

  

    return 0;
}