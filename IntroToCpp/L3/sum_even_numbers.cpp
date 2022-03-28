#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; 

    int i = 1, result = 0;

    while (i <= N){
        if (i % 2 == 0){
            result = result + i;
        }
        i = i + 1;
    }
    cout << result << endl;

}

