/*
Given two integers M & N, calculate and return their multiplication
using recursion. You can only use subtraction and addition for your
calculation. No other operators are allowed.

Sample Input 1 :
    3
    5

Sample Output 1 :
    15

*/

#include <iostream>
using namespace std;

int multiplyNumbers(int m, int n){
    if(n == 1){
        return m;
    }
    return m + multiplyNumbers(m, n-1);
}

int main(){
    int m, n;
    cin >> m >> n;
    int ans = multiplyNumbers(m, n);
    cout << ans;
}
