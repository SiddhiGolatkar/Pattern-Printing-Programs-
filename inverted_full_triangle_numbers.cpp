#include<iostream>
using namespace std;

int main() {

// 1 1 1 1 1
//  2 2 2 2
//   3 3 3
//    4 4
//     5

    int n;
    cout << "enter no.of rows: ";
    cin >> n;

    for(int i=n; i>=1; i--) {
        for(int k=1; k<=n-i; k++) {
            cout << " ";
        }
        for(int j=i; j>=1; j--) {
            cout << (n-i+1) << " ";
        }
        cout << endl;
    }

    return 0;
}