/*
Write a recursive function that returns the sum of the digits of a
given integer.

Input format : Integer N

Output format : Sum of digits of N

Constraints : 0 <= N <= 10^9

Sample Input 1 : 12345

Sample Output 1 : 15
*/

#include <iostream>
using namespace std;

int sumOfDigits(int n){
    if(n/10 == 0){
        return n;
    }
    return (n%10) + sumOfDigits(n/10);
}

int main(){
    int n;
    cin >> n;
    int ans = sumOfDigits(n);
    cout << ans;
}
