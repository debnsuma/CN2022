#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    int limit = num / 2 + 1;
    int temp = 0;
    bool perfect_squar = false;
    while (temp <= limit && temp*temp <= num){

        if (temp*temp < num){
            // cout << temp*temp << endl;
            temp += 1;
            continue;
        } else if (temp*temp == num){
            perfect_squar = true;
            break;
        }
        temp += 1;
    }   

    if (perfect_squar){
        cout << temp << endl;
    } 
    else{
        temp -=1;
        cout << temp << endl;
    }
}