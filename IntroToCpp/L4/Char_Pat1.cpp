#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    int i = 1;

    while (i <= N){
        int j=1;
        char k = 'A';
        while (j <= N){
            cout << k;
            k++;
            j++;

        }
        cout << endl;
        i++;
    }
}
