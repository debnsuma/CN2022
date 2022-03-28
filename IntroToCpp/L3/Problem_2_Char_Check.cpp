#include <iostream>
using namespace std;

int main(){
    
    int num;
    cin >> num;

    int odd_total = 0;
    int even_total = 0;

    int q = 1;

    while (num != 0){
        int n;
        q = num % 10;
        num = num / 10;

        if (q % 2 == 0){
            even_total = even_total + q;
        } else{
            odd_total = odd_total + q;
        }
    } 

    cout << even_total << " " << odd_total << endl;  
}