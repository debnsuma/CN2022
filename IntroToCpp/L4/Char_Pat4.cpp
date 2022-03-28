#include <iostream>
using namespace std;

 int main(){

    int N;
    cin >> N;
    int i = 1;

    while (i <= N){
        int j=i;
        char k = 'A' + i - 1;
        while (j >= 1){
            cout << k;
            k++;
            j--;
        }
        cout << endl;
        i++;
    }
}