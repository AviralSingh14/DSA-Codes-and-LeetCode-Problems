#include <bits/stdc++.h>
#include <iostream>
#include<conio.h>
using namespace std;


void PrintArray(int* arr, int n){
    int i;
    cout<< "Array:" << " ";
    for(i=0; i<n ;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int num;
    cout<<"Enter Array Size:";
    cin >> num;
    int arr[num];
    cout<<"Enter Array Elements:" << endl;
    for (int i = 0; i < num ; ++i){
        cin >> arr[i] ;
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    PrintArray(arr,n);  
    return 0;
}

//TimeComplexity = O(n)