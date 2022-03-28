#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter a number :" << endl;
    cin >> N;


    int line_nmmber = 1;
    int i = 1;

    while (line_nmmber <= N){
        int counter = 0;
        while (counter < N-line_nmmber){
            cout << " ";
            counter = counter + 1;
        }
        while (counter != N){
            cout << i;
            counter = counter + 1;
            i = i + 1;
        }
        line_nmmber = line_nmmber + 1;
        counter = 1;
        cout << endl;
    }
}