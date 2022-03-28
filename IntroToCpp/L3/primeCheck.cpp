#include <iostream>

using namespace std;

int main(){
    int n, i=2;

    cout << "Enter the number :" << endl;
    cin >> n;
    bool isprime = true;

    while (i < n){
        if (n % i == 0){
            isprime = false;
            break;
        } 
        i = i + 1;
    }

    if (isprime){
        cout << "Number " << n << " is A prime number" << endl;

    } else{
        cout << "Number " << n << " is NOT a prime number" << endl;

    }

}