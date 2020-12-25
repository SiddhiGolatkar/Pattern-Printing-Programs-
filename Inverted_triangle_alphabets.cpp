#include<iostream>
using namespace std;

int main() {

// a a a a a
// b b b b
// c c c
// d d
// e

    int n;
    cout << "enter no.of rows: ";
    cin >> n;

    char alphabet ='a';

    for(int i=n; i>=1; i--) {
        for(int j=i; j>=1; j--) {
            cout << alphabet << " ";
        }
        alphabet ++;
        cout << endl;
    } 

    return 0;
}