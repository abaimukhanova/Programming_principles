#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = " AAbbbAAbcde";
    string str;
    cin >> str;
    int cnt = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            cnt++;
        }
    }
    cout << cnt;
    
    

    return 0;
}