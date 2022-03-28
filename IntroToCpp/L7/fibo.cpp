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
    int i = 1;
    while (i <= N){
        cout << fibbo(i) << endl;
        i++;
    }
}