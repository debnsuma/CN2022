#include <iostream>

using namespace std;

int main(){

    int S, E, W, cel;
    cin >> S >> E >> W;

    while (S <= E){
        cel = 5 * (S - 32) / 9;;
        cout << S << " " << cel << endl;
        S = S + W;
    }
}
