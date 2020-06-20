/*
Check whether a given String S is a palindrome using recursion.
Return true or false.
Constraints :
    0 <= |S| <= 1000
    where |S| represents length of string S.

Sample Input 1 :
    racecar

Sample Output 1:
    true

*/

#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrom(char input[]){
    if(strlen(input) == 1 || strlen(input) == 0){
        return true;
    }
    int end = strlen(input)-1;
    if(input[0] == input[end]){
        input[end] = '\0';
        return checkPalindrom(input+1);
    }
    return false;
}

int main(){
    string s;
    cin >> s;
    if(checkPalindrom(&s[0])){
        cout << "true";
    }else{
        cout << "false";
    }
}
