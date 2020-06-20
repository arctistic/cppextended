/*
Given k, find the geometric sum i.e.
    1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)

Constraints :
    0 <= k <= 1000

Sample Input 1 :
    3

Sample Output 1 :
    1.875

*/

#include <iostream>
#include <cmath>
using namespace std;

double geometricSum(int k){
    if(k == 0)
        return 1;
    return geometricSum(k-1) + 1/(pow(2,k));
}

int main(){
    int k;
    cin >> k;
    double ans = geometricSum(k);
    cout << ans;
}
