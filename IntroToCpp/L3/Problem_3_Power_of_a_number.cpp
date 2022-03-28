#include <iostream>
using namespace std;

int main(){

    int num, pow;
    cin >> num >> pow;

    int result = 1;

    while (pow > 0){
        result = result * num;
        pow = pow - 1;
    }
    cout << result <<endl;

}