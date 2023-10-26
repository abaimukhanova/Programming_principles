#include <iostream>


using namespace std;
int main(){
   // 0 1 2 3 4 5 6 7 8 9
   //112233
   int cnt[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   string s;
   cin >> s;
   for(int i = 0; i < s.size(); i++){
       cnt[ s[i] - '0']++;
   }

   int maxi = INT_MIN;
   int mini = INT_MAX;

   for(int i = 0; i < 10; i++){
       cout << cnt[i] << " ";
   }

   for(int i = 0; i < 10; i ++){
       if(cnt[i]==0) continue;
       if(cnt[i] > maxi ){
           maxi = cnt[i];
       }
       if(cnt[i] < mini){
           mini = cnt[i];
       }
   }
   
   if (maxi == mini){
       cout << "YES";
   }
   else cout << "NO";

    return 0;
}