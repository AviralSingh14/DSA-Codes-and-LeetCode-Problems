#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number of row n col:";
    cin >> n;
    // row
    int i = 1; 
    while(i <= n){
        // col
        int j = 1;
        char ch = 'A' + n - i ;
        while(j <= i){

            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}

// D
// CD
// BCD
// ABCD