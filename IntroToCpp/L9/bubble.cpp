#include <iostream>
using namespace std;


void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void bubbleSort(int *input, int size){

    for (int i = 0; i < size-1 ; i++){
        for (int j = i+1; j < size; j++){
            if(input[i] > input[j]){
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
    
    bubbleSort(arr, N);
    printarray(arr, N);   

}