#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++){
        int starts = i * 2 - 2;
        int nums = N - i + 1;
        int j = 1;

        while(j <= nums){
            cout << j;
            j++;
        }

        while(starts > 0){
            cout << "*";
            starts--;
        }

        while(nums > 0){
            cout << nums;
            nums--;
        }

        cout << endl;

    }
}