/*
Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move all disks from source rod to destination rod using third rod (say auxiliary). The rules are :

1) Only one disk can be moved at a time.
2) A disk can be moved only if it is on the top of a rod.
3) No disk can be placed on the top of a smaller disk.

Constraints : 0 <= n <= 20

Sample Input 1 :
            2

Sample Output 1 :
            a b
            a c
            b c

*/

#include <iostream>
using namespace std;

void towerOfHonnoi(int n, char source, char auxiliary, char destination){
    if(n == 0){
        return;
    }
    towerOfHonnoi(n-1, source, destination, auxiliary);
    cout << source << " " << destination << endl;
    towerOfHonnoi(n-1, auxiliary, source, destination);

}

int main(){
    int n;
    cin >> n;
    towerOfHonnoi(n, 'a', 'b', 'c');
}
