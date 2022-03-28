#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    bool first_digit = true;
    int result;
    int remainder;
    int multipier = 2;
    int place = 0;
    if (num == 1){
        result = 1;
    } else if (num == 0){
        result = 0;
    } else {
        while (num > 0){
            if (first_digit){
                remainder = num % 10;
                num = num / 10;
                result = remainder;
                place +=1;
                first_digit = false;
            } else {
                remainder = num % 10;
                num = num / 10;
                int start = 1, multipier = 2;
                while (start < place){
                    multipier *= 2;
                    start += 1;
                }
                result = result + (remainder * multipier);
                place += 1;
                // cout << remainder << " " << place << " " << multipier << endl;

            }
        }
    }
        // result = result + num;
        cout << result << endl;
}