#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter a number :" << endl;
    cin >> N;


    int line_nmmber = 1;

    while (line_nmmber <= N){
        int counter = 1;
        int i = line_nmmber;
        
        while (counter <= line_nmmber){
            cout << i ;
            i = i + 1;
            counter = counter + 1;
        }
        line_nmmber = line_nmmber + 1;
        cout << endl;
    }
}