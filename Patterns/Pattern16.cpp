#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number of row n col:";
    cin >> n;
    // row
    int i = 1; 
    int count = 1;
    while(i <= n){
        // col
        int j = 1;
        
        while(j <= i){
            char ch = 'A' + i + j - 2 ;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}

// A
// BC
// DEF
// GHIF