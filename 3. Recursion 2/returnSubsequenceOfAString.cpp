#include <iostream>
#include <math.h>
using namespace std;

int subs(string input, string output[]){
    if(input.empty()){
        output[0] = "";
        return 1;
    }
    int outputSize = subs(input.substr(1), output);
    for(int i = 0; i < outputSize; i++){
        output[i + outputSize] = input.substr(0,1) + output[i];
    }
    return 2 * outputSize;

}

int main(){
    string s;
    cin >> s;
    string * output = new string[(int)pow(2,s.length())];
    int outputSize = subs(s, output);
    for(int i = 0; i < outputSize; i++){
        cout << output[i] << endl;
    }
}
