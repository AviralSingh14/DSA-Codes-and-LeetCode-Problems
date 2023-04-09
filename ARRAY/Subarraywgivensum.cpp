#include <bits/stdc++.h>
using namespace std;
void SubarraySum(int arr[], int N, int s){
    int Sum = 0;
    for (int i = 0; i < N; i++){
        Sum = arr[i];
        for (int j = i + 1; j < N ; j++){
            if (Sum == s){
                cout << i << j-1; 
            }
            else if (Sum > s){
                break;
            }
            Sum = Sum + arr[j];
        }
    }
    cout << " Not Found";
}

int manin(){
    int arr[5] = {1,2,3,7,5};
    int N = 5;
    int s = 12;
    SubarraySum(arr,N,s);
}