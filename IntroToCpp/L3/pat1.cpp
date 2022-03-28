#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter a number :" << endl;
    cin >> N;


    int start = 1;
    while (N > 0){
        while (start <= N){
            cout << start << " ";
            start = start + 1;
        } 
        cout << endl;
        N = N-1;
        start = 1;
    }
}