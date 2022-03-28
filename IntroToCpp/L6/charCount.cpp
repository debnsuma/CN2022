#include <iostream>
using namespace std;

int main(){
    char c;
    int alpha = 0, numbers = 0, whites = 0;
    c = cin.get();

    while (c != '$'){
        if (c >= 97 && c <= 122){
            alpha++;
        } else if (c >= 48 &&  c <= 57){
            numbers++;
        } else if (c == ' ' || c == '\t' || c == '\n' || c == 32){
            whites++;
        }
        c = cin.get();
    }
    cout << alpha << " " << numbers << " " << whites << endl;
}