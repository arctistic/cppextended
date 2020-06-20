/*
Given an input string S and two characters c1 and c2, you need to
replace every occurrence of character c1 with character c2 in the
given string. Do this recursively.

Input Format :
    Line 1 : Input String S
    Line 2 : Character c1 and c2 (separated by space)

Output Format :
    Updated string

Constraints :   1 <= Length of String S <= 10^6

Sample Input :
    abacd
    a x

Sample Output :
    xbxcd
*/

#include <iostream>
using namespace std;

/*void replaceCharacter(char input[], char c1, char c2){
    if(input[0] == '\0')
        return;

    replaceCharacter(input+1, c1, c2);

    if(input[0] == c1){
        input[0] = c2;
    }
}*/

void replaceCharacter(char input[], char c1, char c2){
    if(input[0] == '\0'){
        return;
    }

    if(input[0] == c1){
        input[0] = c2;
        replaceCharacter(input+1, c1, c2);
    }else{
        replaceCharacter(input+1, c1, c2);
    }
}

int main(){
    char s[1000000];
    cin >> s;
    char c1, c2;
    cin >> c1 >> c2;
    replaceCharacter(s,c1,c2);
    cout << s << endl;
}
