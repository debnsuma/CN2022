#include <iostream>
#include <climits>
using namespace std;

void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int findSecondLargest(int *input, int n)
{
    int largest = input[0];
    int second_largest = INT_MIN;
    int count = 1;

    for (int i = 1; i < n ; i++){
        if (largest == input[i]){
            count += 1;
            continue;
        }
        if (input[i] > second_largest){
            if (input[i] > largest){
                second_largest = largest;
                largest = input[i];
            } else {
                second_largest = input[i];
            }
        }
        // cout << "large : " << largest << " second : " << second_largest << " input[i] " << i << " value " << input[i] << "count : " << count <<endl;
    }
    if ((n <= 1) || count == n){
        return INT_MIN;
    }
    return second_largest;
}

int main(){

    int N1;
    cin >> N1;

    int arr1[100000] = {0};

    // get the array elements from the user 
    for (int i = 0; i < N1; i++){
        cin >> arr1[i];
    }

    int result = findSecondLargest(arr1, N1);
    cout << result <<endl;
}