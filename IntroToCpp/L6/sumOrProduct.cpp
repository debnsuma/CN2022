#include <iostream>
using namespace std;

int main(){
    int n;
    int c;
    cin >> n;
    cin >> c;

    if (c != 1 && c != 2){
        cout << "-1" << endl;
    } else {
        if (n == 1){
            cout << "1" << endl;
        } else {
            int result = 1;
            if (c == 1){
                for (int i = 2; i <= n ; i++){
                    result += i;
                }

            } else if (c == 2){
                for (int i = 2; i <= n ; i++){
                    result *= i;
                }
            }
            cout << result <<endl;
        }
    }
}