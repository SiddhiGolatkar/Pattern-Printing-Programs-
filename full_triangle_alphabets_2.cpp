#include<iostream>
using namespace std;

int main() {

//     a
//    b c
//   d e f
//  g h i j
// k l m n o

    int n;
    cout << "enter no.of rows: ";
    cin >> n;

    char alphabet = 'a';

    for(int i=1; i <=n; i++) {
        for(int k=n-i; k>=1; k--) {
            cout << " ";
        }
        for(int j=1; j<=i; j++) {
            cout << alphabet++ << " ";
        }
        cout << endl;
    }

    return 0;
}