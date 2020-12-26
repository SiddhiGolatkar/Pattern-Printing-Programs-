#include<iostream>
using namespace std;

int main() {

// a b c d e
//  f g h i
//   j k l
//    m n 
//     o

    int n;
    cout << "enter no.of rows: ";
    cin >> n;

    char alphabet ='a';

    for(int i=n; i>=1; i--) {
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