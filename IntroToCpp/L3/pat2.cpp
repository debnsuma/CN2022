#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter a number :" << endl;
    cin >> N;


    int start = 1;
    while (start <= N){
        int i = 1;
        while (i <= start){
            cout << i << " ";
            i = i + 1;
        }
        start = start + 1;
        cout << endl;
    }
}