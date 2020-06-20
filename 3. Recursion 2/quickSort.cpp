#include <iostream>
using namespace std;

int partition(int *input, int si, int ei){
    int count = 0;
    for(int i = si+1; i <= ei; i++){
        if(input[i] <= input[si]){
            count++;
        }
    }
    int pivot = si + count;
    int temp = input[pivot];
    input[pivot] = input[si];
    input[si] = temp;

    while(si < pivot && ei > pivot){
        if(input[si] < input[pivot])
            si++;
        else if(input[ei] > input[pivot])
            ei--;
        else{
            temp = input[ei];
            input[ei] = input[si];
            input[si] = temp;
            si++; ei--;
        }
    }
    return pivot;
}

void quickSort(int *input, int si, int ei){
    if(si > ei){
        return;
    }
    int pivot = partition(input, si, ei);
    quickSort(input, si, pivot-1);
    quickSort(input, pivot+1, ei);
}

int main(){
    int size;
    cin >> size;
    int * input = new int[size];
    for(int i = 0; i < size; i++){
        cin >> input[i];
    }
    quickSort(input, 0, size-1);
    for(int i = 0; i < size; i++){
        cout << input[i] << " ";
    }
    delete[] input;
}
