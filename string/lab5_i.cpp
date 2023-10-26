#include <iostream>
#include <string>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    const int n = 100100;
    int cnt[n], cnt1[n];
    for(int i = 0; i < s.size(); i++){
        cnt[ s[i] - 'a']++;
    }
    for(int i = 0; i < t.size(); i++){
        cnt1[ t[i] - 'a']++;
    }
    for(char i = 'a'; i <= 'z'; i++){
        if(cnt[ i - 'a'] != cnt1[ i - 'a']){
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES";

    return 0;
}