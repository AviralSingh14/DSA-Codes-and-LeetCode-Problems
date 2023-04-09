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
        while(j <= i){
            cout << i ;
            j++;
        }
        cout << endl;
        i++;
    }
}

// 1
// 22
// 333
// 4444