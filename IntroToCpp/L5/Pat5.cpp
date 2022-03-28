#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int i=1;
    while (i <= N){
        
        // Print spaces 
        int spaces = N-i;
        while (spaces > 0){
            cout << " ";
            spaces--;
        }

        // Print left triangle of numbers
        int start = 1;
        while (start <= i){
            cout << start;
            start++;
        }

        // Print right triable of numbers
        int end = i;
        while (end > 1){
            cout << end-1;
            end--;
        }
        cout << endl;
        i++;
    }
}