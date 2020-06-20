#include <iostream>
using namespace std;

int allIndexes(int * input, int size, int x, int *output){
    if(size == 0){
        return 0;
    }

    int ans = allIndexes(input+1, size-1, x, output);

    for(int i = 0; i < ans; i++)
        output[i]++;

    if(input[0] == x){
        for(int i = ans; i >= 1; i--)
            output[i] = output[i-1];

        output[0] = 0;
        return ans+1;
    }
    return ans;
}

int main(){
    int size; cin >> size;
    int * input = new int[size];
    for(int i = 0; i < size; i++){
        cin >> input[i];
    }
    int x; cin >> x;
    int *output = new int[size];

    int ans = allIndexes(input, size, x, output);

    for(int i = 0; i < ans; i++){
        cout << output[i] << " ";
    }

    delete []output;
    delete []input;

}
