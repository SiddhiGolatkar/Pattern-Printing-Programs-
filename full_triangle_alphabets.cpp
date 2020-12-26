#include<iostream>
using namespace std;

int main() {

//     a
//    b b
//   c c c
//  d d d d
// e e e e e

    int n;
    cout << "enter no.of rows: ";
    cin >> n;

    char alphabet = 'a';

    for(int i=1; i<=n; i++) {
        for(int k=n-i; k>=1; k--) {
            cout << " ";
        }
        for(int j=1; j<=i; j++) {
            cout << alphabet << " ";
        }

        alphabet++ ;
        cout << endl;
    }
    
    return 0;
}