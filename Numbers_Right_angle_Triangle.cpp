#include<iostream>
using namespace std;

int main() {

//         1
//       2 2
//     3 3 3
//   4 4 4 4
// 5 5 5 5 5

    int n;
    cout << "enter no.of rows: ";
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int k=n-i; k>=1; k--) {
            cout << "  ";
        }

        for(int j=1; j<=i; j++) {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}