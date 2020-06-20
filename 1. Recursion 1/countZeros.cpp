/*
Given an integer N, count and return the number of zeros that are
present in the given integer using recursion.

Constraints :
    0 <= N <= 10^9

Sample Input 1 :
    10204

Sample Output 1 :
    2
*/

#include <iostream>
using namespace std;

int countZeros(int n){
    if(n/10 == 0){
        return 0;
    }
    int ans = countZeros(n/10);
    if(n % 10 == 0){
        return ans+1;
    }
    return ans;
}

int main(){
    int n; cin >> n;
    int ans = countZeros(n);
    cout << ans;
}
