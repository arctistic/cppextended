#include <iostream>
using namespace std;

int numberOfDigits(int n){
    if(n/10 == 0){
        return 1;
    }
    int smallOutput = numberOfDigits(n/10);
    return 1 + smallOutput;
}

int main(){
    int n;
    cin >> n;
    int ans = numberOfDigits(n);
    cout << ans << endl;
}
