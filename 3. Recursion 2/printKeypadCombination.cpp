#include <iostream>
using namespace std;

void printKeypad(int num, string output){
    if(num == 0){
        cout << output << endl;
        return;
    }

    string keys[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int curNum = num % 10;
    for(int i = 0; i < keys[curNum].length(); i++){
        printKeypad(num / 10, keys[curNum][i] + output);
    }
}

int main(){
    int num;
    cin >> num;
    printKeypad(num, "");
}
