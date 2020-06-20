/*
Given an array of length N and an integer x, you need to find if x
is present in the array or not. Return true or false.
Do this recursively.
Input Format :

Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format : 'true' or 'false'
*/

#include <iostream>
using namespace std;

bool checkNumber(int* input, int size, int x){
    if(size == 0){
        return false;
    }
    if(input[0] == x)
        return true;
    bool temp = checkNumber(input+1, size-1, x);
    return temp;
}

/* another approach
bool checkNumber(int input[], int size, int x) {
  if(size == 0){
        return false;
    }
    bool temp = checkNumber(input+1, size-1, x);
    if(temp || input[0] == x){
        return true;
    }
    return false;
}
*/
int main(){
    int n, x;
    cin >> n;
    int *input = new int[n];
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    cin >> x;
    bool ans = checkNumber(input, n, x);
    if(ans)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
