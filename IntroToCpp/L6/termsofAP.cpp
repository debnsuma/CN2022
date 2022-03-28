#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        int result = 0;
        result = 3*i + 2;
        if ((result % 4) == 0) {
            n += 1;
            continue;
        } else {
           cout << result << " " ; 
        }
    }
    cout << endl;
}