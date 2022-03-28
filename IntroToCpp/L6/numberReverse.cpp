#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    bool first_digit = true;
    int reverse_num;
    int remainder;
    if (num < 10){
        cout << num << endl; 
    } else {
        while (num > 9){
            if (first_digit){
                remainder = num % 10;
                num = num / 10;
                reverse_num = remainder;
                first_digit = false;
            } else {
                remainder = num % 10;
                num = num / 10;
                reverse_num = reverse_num * 10 + remainder;
            }
        }
        reverse_num = reverse_num * 10 + num;
        cout << reverse_num << endl;
    }




}