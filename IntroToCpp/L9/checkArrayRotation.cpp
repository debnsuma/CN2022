#include <iostream>
#include <climits>
using namespace std;

void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int arrayRotateCheck(int *input, int size)
{
    int result = 0;
    int last = input[0];

    for (int i = 0; i < size-1; i++){
        if(input[i+1] >= input[i]){
            result += 1;
        } else {
            return result+1;
        }

    }
    if (result == size-1){
        result = 0;
    }

    return 0;
}

int main(){

    int N1;
    cin >> N1;

    int arr1[100000] = {0};

    // get the array elements from the user 
    for (int i = 0; i < N1; i++){
        cin >> arr1[i];
    }

    int result = arrayRotateCheck(arr1, N1);
    cout << result <<endl;
}