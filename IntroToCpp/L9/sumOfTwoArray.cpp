#include <iostream>
using namespace std;


void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void reverseArrar(int arr[], int n){

    int mid = n / 2;

    for (int i = 0; i < mid ; i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i]; 
        arr[n-1-i] = temp;
    }

}
void sumOfTwoArrays(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int carry = 0;
    int sum = 0;
    int i = 0;

    if (size1 >= size2){
        i = size1;
    } else {
        i = size2;
    }

    int ix = 0;

    for (int j = 1; j <= i; j++){
        int arr1_ix = size1 - j;
        int arr2_ix = size2 - j;

        if (arr1_ix < 0 && arr2_ix >= 0){
            sum = arr2[arr2_ix] + carry;
        } else if (arr2_ix < 0 && arr1_ix >= 0){
            sum = arr1[arr1_ix] + carry;
        } else{
            sum = arr1[arr1_ix] + arr2[arr2_ix] + carry;
        }
        if (sum >= 10){
            carry = sum / 10;
            sum = sum % 10;
        } else{
            carry = 0;
        }

        // cout << "adding " << arr1[arr1_ix] << " and " << arr2[arr2_ix] << " carry " << carry << endl;

        ans[ix] = sum;
        ix++;
    }
    if (carry != 0){
        ans[ix] = carry;
        i++;
    } else{
        ans[ix] = 0;
        i++;
    }
    reverseArrar(ans, i);
    printarray(ans, i);


}

int main(){

    int N1, N2;

    int arr1[100000] = {0};
    int arr2[100000] = {0};
    int result[100000] = {0};
    // get the array elements from the user 
    cin >> N1;
    for (int i = 0; i < N1; i++){
        cin >> arr1[i];
    }

    // get the array elements from the user 
    cin >> N2;
    for (int i = 0; i < N2; i++){
        cin >> arr2[i];
    }

    sumOfTwoArrays(arr1, N1, arr2, N2, result);
}

