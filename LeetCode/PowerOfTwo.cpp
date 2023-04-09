// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for (int x = 0; i<= 30; x++){
//         if(n == pow(2,x)){
//             cout << "true";
//             break;
//         }
//         else{
//             continue;
//         }
//     }
//     cout << "false";

// }

class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int x = 0; x <= 30; x++){
            int ans = pow(2,x);
            if(ans==n)
            {
                return true;
            }
        }
        return false;
    }
};