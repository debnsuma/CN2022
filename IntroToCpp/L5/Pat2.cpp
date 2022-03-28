#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int i=1;
    while (i <= N){

        // for spaces
        int spaces = 1;
        while (spaces <= N - i){
            cout << " ";
            spaces++; 
        }

        // for numbers 
        int j = 1;
        while (j <= i){
            cout << j;
            j++;
        }
        cout << endl;
        i++;

    }
}