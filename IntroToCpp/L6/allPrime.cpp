#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i=2; i <= n ; i++){
        if(i == 2){
            cout << i << endl;
            continue;
        } else{
            bool divied = false;
            for (int j = 2; j < i; j++){
                if (i % j == 0){
                    divied = true;
                    break;
                }
            }
            if (!divied){
                cout << i << endl;
            }
        }
    }

}