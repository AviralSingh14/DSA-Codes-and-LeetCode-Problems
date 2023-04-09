#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number of row n col:";
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        int count = i;
        char space = ' ';
        while(j <= i){
            cout << j ;
            cout << space;
            cout << count ;
            count--;
            j++;
            space++;
        }
        cout << endl;
        i++;
    }
}

// 1     1
// 12   21
// 123 321
// 1234321