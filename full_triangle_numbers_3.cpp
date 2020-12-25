#include<iostream>
using namespace std;

int main() {

//       1
//      2 3
//     4 5 6
//   7 8 9 10
// 11 12 13 14 15 

    int n;
    cout << "enter no.of rows: ";
    cin >> n;

    int x = 1;
    for(int i = 1; i<=n; i++) {
        for(int k=(n-i); k>=1; k--) {
            cout << " ";
            }

        for(int j=1; j<=i ; j++) {
            cout << x++ << " ";
        }
        cout << endl;
    }

    return 0;
}