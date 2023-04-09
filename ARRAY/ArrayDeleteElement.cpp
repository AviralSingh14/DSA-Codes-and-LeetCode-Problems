#include <bits/stdc++.h>
#include <iostream>
#include<conio.h>
using namespace std;

void Delete(int* arr, int num, int x){
    //Inserting x at pos
    int i;
    for (i = 0; i < num; i++){
        if (arr[i] = x){
            break;
        }
    }
    if (i < num){
        num = num - 1;
        for (int j = i; j < num; j++){
            arr[j] = arr[j+1];
        }
    }
    
    //Printing new array
    cout << "Updated Array :";
    for(i = 0; i < num ; i++){
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
    int x;
    cout << "Enter Element to be Deleted:";
    cin >> x;

    Delete(arr, num, x);
    return 0;
}

//TimeComplexity = O(n)