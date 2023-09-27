#include <iostream>
using namespace std;
int main(){
    int arr[5]={100, 56, 78, 90, 100};
    cout << arr[3];
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cout << a[i]+1<< " ";
    }
    return 0;
}