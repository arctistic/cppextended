#include <iostream>
#include <string.h>
using namespace std;

void removeX(char input[]){
    if(strlen(input) == 0){
        return;
    }
    removeX(input+1);
    if(input[0] == 'x'){
        for(int i = 1; i <= strlen(input); i++){
            input[i-1] = input[i];
        }
    }
}

int main(){
    char c[1000];
    cin >> c;
    removeX(c);
    cout << c;
}
