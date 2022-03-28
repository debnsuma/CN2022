#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    int i = 1;

    while (i <= N){
        int j=N;
        while (j > 0){
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
}
