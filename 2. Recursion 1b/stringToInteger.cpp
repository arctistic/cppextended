/*
Write a recursive function to convert a given string into the
number it represents. That is input will be a numeric string that
contains only numbers, you need to convert the string into
corresponding integer and return the answer.

Input format :
    Numeric string S (string, Eg. "1234")

Output format :
    Corresponding integer N (int, Eg. 1234)

Constraints :
    0 <= |S| <= 9
    where |S| represents length of string S.

Sample Input 1 :
    1231

Sample Output 1 :
    1231
*/
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int stringToNumber(char input[]){
    if(strlen(input) == 1){
        return (input[0] - '0');
    }
    int ans = stringToNumber(input + 1);

    int f = (int)pow(10, (strlen(input)-1));

    return ((input[0] - '0') * f) + ans;
}

int main(){
    char input[10000];
    cin >> input;
    int ans = stringToNumber(input);
    cout << ans;
}
