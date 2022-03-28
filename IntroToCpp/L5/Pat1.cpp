#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int i=1;
    while (i <= N){

        // for spaces
        int j = i;
        while (N-j > 0){
            cout << " ";
            j++;
        }

        // for printing "*"

        j = i;
        while (j >0){
            cout << "*";
            j--;
        }
        cout << endl;
        i++;
    }
}