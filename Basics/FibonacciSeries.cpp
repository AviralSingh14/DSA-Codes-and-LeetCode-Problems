#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter N terms for fibonnaci:";
    cin >> n;
    int sum = 0;
    int element = 1;
    int prev_element = 1;

    for (int i = 0; i<=n; i++){

        if (i == 0){
            cout << 0 << " ";
        }

        else if (i == 1){
            cout << 1 << " ";
        }

        else if (i==2){
            cout << 1 << " ";
        }

        else if (i>2){
            sum = element + prev_element;
            prev_element = element;
            element = sum;
            cout << sum << " ";  
        } 
    }
}

// 0 1 1 2 3 5 8 13
// 0 1 2 3 4 5 6 7

