#include<iostream>
using namespace std;

int main() {

// a b c d e
//  a b c d
//   a b c
//    a b
//     a

    int n;
    cout << "enter no.of rows: ";
    cin >> n;

    for(int i=n; i>=1; i--) {
        char alphabet = 'a';

        for(int k=1; k<=n-i; k++) {
            cout << " ";
        }
        for(int j=i; j>=1; j--) {
            cout << alphabet++ << " ";
        }
        cout << endl;
    }
    
    return 0;
}