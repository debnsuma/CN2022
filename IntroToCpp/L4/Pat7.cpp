#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    int i = 1;
    while (i <= N){
        int j = i;
        int k = i;
        while (j >= 1){
            cout << k;
            j--;
            k++;
        }
        cout << endl;
        i++;
    }
}
