#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter 2 numbers : " << endl;
    cin >> a >> b;
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;

    if (a == b){
        cout << "Both the numbers are equal" << endl;
    } else if (a < b){
        cout << "a is smaller than b" << endl;
    } else{
        cout << "a is larger than b" << endl;
    }
}