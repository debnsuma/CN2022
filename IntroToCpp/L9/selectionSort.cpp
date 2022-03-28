#include <iostream>
using namespace std;


void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void selectionSort(int arr[], int n){

    for (int i = 0; i < n-1 ; i++){
        for(int j = i+1; j < n; j++){
            // cout << "i : " << i << " j : " << j << endl;
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
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
    
    selectionSort(arr, N);
    printarray(arr, N);   

}