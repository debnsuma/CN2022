#include <iostream>
using namespace std;

void printTable(int S, int E, int W){
    int cel;
    while (S <= E){
        cel = 5 * (S - 32) / 9;;
        cout << S << " " << cel << endl;
        S = S + W;
    }
}

int main(){
    int S, E, W, cel;
    cin >> S >> E >> W;
    printTable(S, E, W);
}
