#include <iostream>
using namespace std;

void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int duplicateNumber(int *arr, int size){

    int tracker[100000] = {0};

    for (int i=0; i < size; i++){
        tracker[arr[i]] += 1;
        if (tracker[arr[i]] == 2){
            return arr[i];
        }
    }

    return -1;
}

int main(){

    int N;
    cin >> N;

    int arr[100000] = {0};

    // get the array elements from the user 
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    int u = duplicateNumber(arr, N);
    cout << u << endl;
    

}