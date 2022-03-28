#include <iostream>
using namespace std;

int fibbo(int i){
    if ( i == 1 || i == 2){
        return 1;
    } else {
        return fibbo(i-1) + fibbo(i-2);
    } 
}


int main(){

    int N;
    cin >> N;
    int i = 1, j = 3;
    bool present = false;

    while (j <= N){
        j = fibbo(i);
        i++;
        // cout << j << endl;
        if (j == N){
            present = true;
            break;
        } else{
            continue;
        }
    }
    
    if (present){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}