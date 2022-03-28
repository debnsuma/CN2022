#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int i=1;
    while (i <= N){
        int value = N-i+1;
        int j = 0;
        while(j <= N-i){
            cout << value;
            j++;
        }
        cout << endl;
        i++;
    }
}