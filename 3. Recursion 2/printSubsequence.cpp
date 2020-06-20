#include <iostream>
using namespace std;

void printSubs(string s, string s1 = ""){
    if(s.empty()){
        cout << s1 << endl;
        return;
    }
    printSubs(s.substr(1), s1);
    printSubs(s.substr(1), s1+s[0]);
}

int main(){
    string s;
    cin >> s;
    printSubs(s);
}
