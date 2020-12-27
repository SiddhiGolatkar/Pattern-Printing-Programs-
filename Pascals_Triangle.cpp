#include<iostream>
using namespace std;

int main() {

//      1           // Binomial Expression formulas
//     1 1          // (a+b)^0 = (1) 1
//    1 2 1         // (a+b)^1 = (1)a + (1)b
//   1 3 3 1        // (a+b)^2 = (1)a^2 + (2)ab + (1)b^2
//  1 4 6 4 1       // (a+b)^3 = (1)a^3 + (3)a^2b + (3)ab^2 + (1)b^3

    int n;
    cout << "enter no.of rows: ";
    cin >> n;

    for(int i=1; i<=n; i++) {
        int coef = 1;
        for(int k = n-i; k>=1; k--) {
            cout << " ";
        }
        for(int j=1; j<=i; j++) {
                cout << coef << " ";
                coef = coef * (i-j)/j ;
            }
            cout << endl;
    }

    return 0;
}