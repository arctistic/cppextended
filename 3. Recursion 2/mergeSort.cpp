#include <iostream>
using namespace std;

void merge(int * input, int si, int ei){
    int mid = (si+ei)/2;
    int temp[ei-si+1];
    int j = si, k = mid+1;
    int i = 0;
    for(; i <= ei-si; i++){
        if(j <= mid && k <= ei){
            if(input[j] <= input[k]){
                temp[i] = input[j];
                j++;
            }else{
                temp[i] = input[k];
                k++;
            }
        }else{
            break;
        }
    }
    if(j > mid){
        while(k <= ei){
            temp[i] = input[k];
            k++; i++;
        }
    }else{
        while(j <= mid){
            temp[i] = input[j];
            j++; i++;
        }
    }

    j = 0;
    for(int i = si; i <= ei; i++){
        input[i] = temp[j];
        j++;
    }
}

void mergeSort(int * input, int si, int ei){
    if(si >= ei){
        return;
    }

    int mid = (si+ei)/2;
    mergeSort(input, si, mid);
    mergeSort(input, mid+1, ei);
    merge(input, si, ei);
}

int main(){
    int size;
    cin >> size;
    int * input = new int[size];
    for(int i = 0; i < size; i++){
        cin >> input[i];
    }

    mergeSort(input, 0, size-1);
    merge(input, 0, size-1);

    for(int i = 0; i < size; i++){
        cout << input[i] << " ";
    }
    delete[] input;
}
