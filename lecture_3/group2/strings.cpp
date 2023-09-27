#include <iostream> 
using namespace std;
int main (){
    string str = "hello";
    str.size();
    str.clear();
    //cout << str;
    str ="helloo";
    str.empty();
    str.push_back('c');
    //cout << str;
    str.append(3, 'a');
    
    string str1 = "WorldworldWorld";
    string str2 = "lovely";
    //str.append(str1);
    str.append(str1,10, 5);
    str.erase(5, 5);
    str.insert(5, 1, ' ');
    str.insert(6, str2, 0,6);
    str.insert(12, 1, ' ');
    string str3 = "or";
    cout << str.find(str3, 10);
    cout << str.substr(6, 6)<<endl;
    cout << str.substr(6)<< endl;
    cout << str;



    return 0;
}