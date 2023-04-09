#include <bits/stdc++.h>
#include <iostream>
#include<conio.h>
using namespace std;

void Insert(int* arr, int num, int x, int pos){
    //Inserting x at pos
    int i;
    num++;
    // cout<< ;
    for (i = num; i >= pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[ pos - 1] = x;
    
    //Printing new array
    cout << "Updated Array :";
    for(i = 0; i < num + 1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void PrintArray(int* arr, int n){
    int i;
    cout<< "Array :" << " ";
    for(i=0; i<n ;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    //Creating Array
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

    //Inserting new element
    int x, pos;
    cout << "Enter Element to be Inserted:";
    cin >> x;
    cout << "Enter Position:";
    cin >> pos;

    Insert(arr, num, x, pos);
    return 0;
}

//TimeComplexity = O(n)