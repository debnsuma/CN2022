#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a number : " << endl;
    cin >> a;
    if (a % 2 == 0){
        cout << "The number " << a << " is an even number" << endl;
    } else {
        cout << "The number " << a << " is an odd number" << endl;
    }
}