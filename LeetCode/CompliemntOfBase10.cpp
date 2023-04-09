// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Number:";
//     cin >> n;
//     int ans = 0;
//     int i = 0;
//     while (n!=0){
//         int bit = n & 1;
//         ans = bit * pow (10, i) + ans;
//         n = n >> 1;
//         i++;
//     }

//     ans = ! ans;
//     cout << "Conversion:" << ans << endl; 
// }

//B
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Number:";
//     cin >> n;
//     int ans ;
//     int arr[32];
//     int i = 0;
//     int rem;
//     while (n>0){
        // int bit = n & 1;
        // ans = bit * pow (10, i) + ans;
        // n = n >> 1;
        // i++;
        // arr[i] = n % 2;
        // n = n/2;
        // i++;
        // rem = n%2;
        // n = n/2;
        // cout<<rem;
    // }
    // for (int j = i-1; j>=0;j--){
    //     if(arr[j]==0){
    //         cout<< 1 ;
    //     }
    //     else{
    //         cout<<0;
    //     }
    //     // cout << arr[j];
    // }
    
    
    
    // while (rem!=0){
    //     int digit = rem%10;
    //     ans = (ans*10) + digit;
    //     rem = rem/10;
    // }
    
    // cout << ans;
    
    // cout << "Conversion:" << ans << endl; 
    // ans = ! ans;
    // cout << "Conversion:" << ans << endl; 
    
//     int ans1 = 0;
//     int j = 0;
//     while (j!=0){
//         int digit = ans % 10;
//         ans1 = digit * pow (2, j) + ans1;
//         ans = ans / 10;
//         j++;
//     }
//     cout << "Conversion:" << ans1 << endl;
// }
#include <iostream>
#include <math.h>
using namespace std;
class Solutin{
public:
    int bitwiseComplement(int n){
        int m = n;
        int mask = 0;
        while(m!=0){
            mask = (mask << 1) | 1;
            m = m >> 1;
        }

        int ans = (~n) & mask;
        return ans;
    }
};

int main(){
   int bitwiseComplement(5);
}
