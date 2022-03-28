#include <iostream>
using namespace std;


void genAndPrintArray(int n){
    int arr[10000];

    int start = 1;
    int end;
    bool flag = true;
    for (int i = 1; i <= n; i++){
        if(start <= n){
            cout << start << " ";
            end = start - 1;
            start += 2;
        } else {
            if ((n % 2 == 0) && flag){
                end += 2;
                flag = false;
                
            }
            cout << end << " ";
            end -= 2;
        }
    }
    cout << endl;
    // return arr;
} 

int main(){
    int num_tc = 0;
    cin >> num_tc;

    int metaArr[100];
    // take the size of each array 
    for (int i = 0; i < num_tc ; i++){
        cin >> metaArr[i];
    }

    // generating each array and printing 
    for (int i = 0; i < num_tc ; i++){
        genAndPrintArray(metaArr[i]);
    }
}