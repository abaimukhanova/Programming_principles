#include <iostream>
using namespace std;
int main(){
    bool a = 1;
    bool b {!a}; 
    bool c {!b};
    bool b1 = 0;
    bool ab {a1&&b1};
    bool ab1 {a1 || b1};
    bool ab2 {a1^b1};

    return 0;
}