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
        int count = i;
        while(j <= i){
            cout << count ;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}

// 1
// 23
// 345
// 4567