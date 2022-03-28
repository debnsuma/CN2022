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
        int start = i;
        int count = i;
        while (count > 0){
            cout << start;
            start++;
            count--;
        }

        // Print right triable of numbers
        int end = i;
        start = start - 2;
        while (end > 1){
            cout << start;
            start--;
            end--;
        }
        cout << endl;
        i++;
    }
}