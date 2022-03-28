#include <iostream>
using namespace std;

void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void sortZeroesAndOne(int *input, int size) {

    int j = size - 1;
    for (int i=0; i < size; i++){
        if (input[i] == 0){
            continue;
        } else {
            while(i < j){
                if (input[j] == 0){
                    input[j] = 1;
                    input[i] = 0;
                    j--;
                    break;
                }
                j--;
            }
        }
    }

}

int main(){

    int N;
    cin >> N;

    int arr[100000] = {0};

    // get the array elements from the user 
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    sortZeroesAndOne(arr, N);   
    printarray(arr, N); 

}