#include <iostream>
using namespace std;


void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int total = size1 + size2;
    int arr1_marker = 0, arr2_marker = 0;

    for(int i = 0; i < total; i++){

        if (arr1_marker == size1){
            for (int j = arr2_marker; j < size2 ; j++){
                ans[i] = arr2[j];
                // cout << arr2[arr2_marker]<< " from arr2" << " marker of arr2 " << arr2_marker << endl;
                // printarray(ans, total);
                i++;
                
            }
            break;
        } else if (arr2_marker == size2){
            for (int j = arr1_marker; j < size1 ; j++){
                ans[i] = arr1[j];
                // cout << arr1[arr1_marker] << " from arr1" << " marker of arr1 " << arr1_marker << endl;
                // printarray(ans, total);
                i++;
            }
            break;            
        }

        if (arr1[arr1_marker] < arr2[arr2_marker]){
            // cout << arr1[arr1_marker] << " from arr1" << " marker of arr1 " << arr1_marker << endl;
            ans[i] = arr1[arr1_marker];
            arr1_marker += 1;
            // printarray(ans, total);
        } else {
            // cout << arr2[arr2_marker]<< " from arr2" << " marker of arr2 " << arr2_marker << endl;
            ans[i] = arr2[arr2_marker];
            arr2_marker += 1;
            // printarray(ans, total);
        } 

    }
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

    merge(arr1, N1, arr2, N2, result);
    printarray(result, N1+N2);   

}

