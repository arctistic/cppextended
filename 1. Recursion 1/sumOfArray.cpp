/*
Given an array of length N, you need to find and return the sum
of all elements of the array.
Do this recursively.

Sample Input 1 :
3
9 8 9

Sample Output 1 :
26
*/

#include <iostream>
using namespace std;

int sum(int * input, int n){
    if(n == 1){
        return input[0];
    }
    return input[0] + sum(input+1, n-1);
}

int main(){
    int n;
    cin >> n;
    int * arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = sum(arr, n);
    cout << ans << endl;
}
