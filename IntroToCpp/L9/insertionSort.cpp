#include <iostream>
using namespace std;


void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void insertionSort(int *input, int size){

    for (int i = 0; i < size; i++){
        for (int j = 0; j <= i; j++){
            if(input[j] > input[i]){
                int temp = input[i];
                input[i] = input[j];
                input[j] = temp;  
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
    
    insertionSort(arr, N);
    printarray(arr, N);   

}