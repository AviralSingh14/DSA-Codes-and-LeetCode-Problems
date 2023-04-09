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
        char ch = 'A' - 1  ;
        while(j <= n){
            cout << (char)(ch + j);
            j++;
        }
        cout << endl;
        i++;
    }
}

// ABCD
// ABCD
// ABCD
// ABCD