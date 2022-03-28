#include <iostream>
using namespace std;

void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int findUnique(int arr[], int size) {

    for (int i=0; i < size; i++){
        int count = 0;

        for(int j = 0; j < size; j++){
            if (arr[i] == arr[j]){
                count += 1;
                continue;
            }
        }
        if (count == 1){
            return arr[i];

        }
    }

    return 0;
}

int main(){

    int N;
    cin >> N;

    int arr[100000] = {0};

    // get the array elements from the user 
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    int u = findUnique(arr, N);
    cout << u << endl;
    

}