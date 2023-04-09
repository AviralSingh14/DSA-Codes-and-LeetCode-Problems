#include <iostream>
using namespace std;
int main(){
    char ch;
    cout <<"Enter Character or Number:";
    cin >> ch;

    int a = int(ch);

    cout<<"ASCII Value:"<<a<<endl;

    if(a>=97 && a<=122){
        cout<<"LowerCase"<<endl;
    }

    else if(a>=65 && a<=90){
        cout<<"UpperCase"<<endl;
    }
    else if(a>=48 && a<=57){
        cout<<"Number"<<endl;
    }

    
}