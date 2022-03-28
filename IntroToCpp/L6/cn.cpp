#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    int c, p;
    bool start = true;

    int max_inc_count = 0;
    int max_dec_count = 1;

    bool inc_flag = false;
    bool dec_flag = true;
    bool false_flag = false;

    while (i <= n){
        
        // taking the number from the user
        cin >> c;

        // checking the first number in the serise 
        if(start){
            i = i + 1;
            p = c;
            start = false;
            continue;
        }

        if (c < p && dec_flag){
            p = c;
        } else if ((c < p) && !dec_flag){
            if (inc_flag){
                false_flag = true;
            } else {
                p = c;
                max_dec_count += 1;
                dec_flag = true;
            }
        } else if ((c > p) && dec_flag){
            p = c;
            max_inc_count += 1;
            dec_flag = false;
            inc_flag = true;
        } else if ((c > p) && !dec_flag){
            p = c; 
            inc_flag = true;
        } else if (c == p){
            false_flag = true;
        }

        i = i + 1;
    }

    if (max_inc_count <= 1 && max_dec_count <= 1 && !false_flag){
        cout << "true" << endl;
    } else{
        cout << "false" << endl;
    }

    // cout << "inc count :" << max_inc_count << endl;
    // cout << "dec count :" << max_dec_count << endl;

}