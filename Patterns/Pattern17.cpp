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
        int count = i;
        while(j <= i){
            char ch = 'A' - 1 ;
            cout << (char)(ch + count);
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}

// A
// BC
// CDE
// DEFG