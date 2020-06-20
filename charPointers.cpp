#include <iostream>
using namespace std;

int main(){
    char ch = 'a';
    char * pch = &ch;

    cout << *pch << endl;
    cout << pch << endl;



    int a = 10;
    int *p = &a;
    int **q = &p;
    int b = 20;
    *q = &b;
    (*p)++;
    cout << a << " " << b << endl;
}
