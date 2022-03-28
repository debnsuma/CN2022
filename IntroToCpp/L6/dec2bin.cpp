#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    long  reminder, pv = 1, result = 0; 
    while (num != 0){

        reminder = num % 2;
        num = num / 2;

        result = result +  reminder * pv;
        pv = pv * 10;
    }

    cout << result << endl;
}