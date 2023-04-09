#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number of row n col:";
    cin >> n;
    int i = 1;
    int count = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << count ;
            count = count + 1;
            j = j + 1; 
        }
        
        cout << endl;
        i = i + 1;
    }
}

// 1234
// 5678
// 9101112
// 13141516