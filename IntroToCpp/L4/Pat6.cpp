#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    int i = 1;
    int k = 1;
    while (i <= N){
        int j = 1;
        while (j <= i){
            cout << k;
            j++;
            k++;
        }
        cout << endl;
        i++;
    }
}
