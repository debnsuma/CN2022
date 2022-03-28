#include <iostream>
using namespace std;


void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void pushZeroesEnd(int *input, int size)
{
    int temp[100000] = {0};
    int k = 0;
    for (int i = 0; i < size; i++){
        if (input[i] != 0){
            temp[k] = input[i];
            k += 1;
        } else{
        }
    }

    for (int i = 0; i < size; i++){
        input[i] = temp[i];
    }
}

void pushZeroesEnd2(int *input, int size)
{
    int k = 0;
    for (int i = 0; i < size; i++){
        if (input[i] != 0){
            int temp = input[i];
            input[i] = input[k];
            input[k] = temp;
            k++;
        }
    }
}

int main(){

    int N1, N2;

    int arr1[100000] = {0};

    // get the array elements from the user 
    cin >> N1;
    for (int i = 0; i < N1; i++){
        cin >> arr1[i];
    }

    pushZeroesEnd2(arr1, N1);
    printarray(arr1, N1);   

}

