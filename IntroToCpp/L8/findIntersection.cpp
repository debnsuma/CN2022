#include <iostream>
#include <climits>
using namespace std;

void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void intersection(int *input1, int *input2, int size1, int size2)
{
    for(int i = 0; i < size1; i++){
        for (int j = 0; j < size2; j++){
            if (input1[i] == input2[j]){
                input2[j] = INT_MIN;
                cout << input1[i];
                cout << " ";
                break;
            }
        }
        
    }

    cout << endl;

}

int main(){

    int N1, N2;
    cin >> N1;

    int arr1[100000] = {0};
    int arr2[100000] = {0};

    // get the array elements from the user 
    for (int i = 0; i < N1; i++){
        cin >> arr1[i];
    }
    
    cin >> N2; 
    // get the array elements from the user 
    for (int i = 0; i < N2; i++){
        cin >> arr2[i];
    }

    intersection(arr1, arr2, N1, N2);
    

}