#include <iostream>
using namespace std;

int main(){
    int N, up, down;
    cin >> N;

    int i=1;
    up = N/2 + 1;
    down = N - up;

    while (i <= up){
        
        // Print spaces 
        int spaces = up-i;
        while (spaces > 0){
            cout << " ";
            spaces--;
        }

        // Print left triangle of numbers
        int start = 1;
        while (start <= i){
            cout << "*";
            start++;
        }

        // Print right triable of numbers
        int end = i;
        while (end > 1){
            cout << "*";
            end--;
        }
        cout << endl;
        i++;
    }

    i = down;
    while (i > 0){
        
        // Print spaces 
        int spaces = down-i+1;
        while (spaces > 0){
            cout << " ";
            spaces--;
        }

        // Print left triangle of numbers
        int start = 1;
        while (start <= i){
            cout << "*";
            start++;
        }

        // Print right triable of numbers
        int end = i;
        while (end > 1){
            cout << "*";
            end--;
        }
        cout << endl;
        i--;
    }

}