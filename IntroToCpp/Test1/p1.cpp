#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for (int i=1; i <= N; i++){
        int spaces = N - i;
        while (spaces >0){
            cout << " ";
            spaces--;
        }
        int j = i;
        while (j > 0){
            cout << j;
            j--;
        } 
        j = 2; 
        while (j <= i){
            cout << j;
            j++;
        }
        cout << endl;
    }
}
