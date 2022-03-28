#include <iostream>
using namespace std;

void swaparray(int arr[], int N){
    int j, temp;
    for (int i = 0; i < N - 1; i=i+2){
        j = i + 1;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

    }
}

void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main(){

    int N;
    cin >> N;

    int arr[100000] = {0};

    // get the array elements from the user 
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    swaparray(arr, N);
    printarray(arr, N);

}
