/*
Write a program to find x to the power n (i.e. x^n).
Take x and n from the user. You need to return the answer.

Input format :
Two integers x and n (separated by space)

Output Format :
x^n (i.e. x raise to the power n)

Sample Input 1 :
3 4

Sample Output 1 :
81

*/

#include <iostream>
using namespace std;

int powerN(int x, int n){
    if(n == 0){
        return 1;
    }
    int smallOutput = powerN(x, n-1);
    int output = x * smallOutput;
    return output;
}

int main(){
    int x,n;
    cin >> x >> n;
    int ans = powerN(x, n);
    cout << ans << endl;
}
