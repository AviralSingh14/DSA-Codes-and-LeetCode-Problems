#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number of row n col:";
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = n;
        while(j >= 1){

            cout << j ;
            j = j - 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// 4321
// 4321
// 4321
// 4321