/*
Given an integer n, using phone keypad find out all the possible
strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.
Note :  1. The order of strings are not important.
        2. Input and output has already been managed for you.
You just have to populate the output array and return the count of
elements populated in the output array.

Sample Input:
    23

Sample Output:
    ad
    ae
    af
    bd
    be
    bf
    cd
    ce
    cf


*/



#include <iostream>
using namespace std;

/*int keypad(int num, string * output){
    if(num == 0){
        output[0] = "";
        return 1;
    }
    string keys[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    int smallLength = keypad(num/10, output);

    int curNum = num%10;
    for(int i = 1; i < keys[curNum].length(); i++){
        for(int j = 0; j < smallLength; j++){
            output[j + i*smallLength] = output[j];
        }
    }
    for(int i = 0; i < keys[curNum].length(); i++){
        for(int j = 0; j < smallLength; j++){
            //// concat this way because the curNum is the last digit towards the end(left)
            output[j + i*smallLength] = output[j+i*smallLength] + keys[curNum][i];
        }
    }
    return smallLength * keys[curNum].length();
}*/

int keypad(int num, string output[]){
    if(num == 0){
        output[0] = "";
        return 1;
    }
    string keys[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string smallOutput[10000];
    int smallLength = keypad(num/10, smallOutput);
    int curNum = num % 10;
    int k = 0;
    for(int i = 0; i < keys[curNum].length(); i++){
        for(int j = 0; j < smallLength; j++){
            output[k] = smallOutput[j] + keys[curNum][i];
            k++;
        }
    }
    return k;
}

int main(){
    int num;
    cin >> num;
    string * output = new string[10000];
    int length = keypad(num, output);
    for(int i = 0; i < length; i++){
        cout << output[i] << endl;
    }
}
