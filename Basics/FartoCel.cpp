#include <iostream>
using namespace std;
int main(){
    double F;
    cout<<"Enter Temp in F:";
    cin>>F;
    double C;
    C = (F - 32)*5/9;

    cout<<"Temp in C is:" << C;   
}