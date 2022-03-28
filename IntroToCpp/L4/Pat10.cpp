#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    int i = 1;

    while (i <= N){
        int j=i;
        while (j >= 1){
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
}
