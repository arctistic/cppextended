#include <iostream>
#include <string.h>
using namespace std;

void pairStar(char input[]){
    if(strlen(input) == 0){
        return;
    }
    pairStar(input+1);
    if(input[0] == input[1]){
        for(int i = strlen(input); i >= 1; i--){
            input[i+1] = input[i];
        }
        input[1] = '*';
    }
}

int main(){
    char input[1000];
    cin >> input;
    pairStar(input);
    cout << input;
}
