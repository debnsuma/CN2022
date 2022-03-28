#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int i=1;
    while (i <= N){
        int j = N;
        while (j >= i){
            cout << "*";
            j--;
        }
        cout << endl; 
        i++;
    }
}