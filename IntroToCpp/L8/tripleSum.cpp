#include <iostream>
#include <climits>
using namespace std;

void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int tripletSum(int *input1, int size1, int x)
{
    int c = 0;
    if (size1 < 3){
        return c;
    }
    for(int i = 0; i <= size1-3; i++){
        for (int j = i+1; j <= size1-2; j++){
            for (int k = j+1; k <= size1-1; k++){
                if (input1[i] + input1[j] + input1[k]== x){
                    c += 1;
                }
            }
        }
        
    }

    return c;

}

int main(){

    int N1;
    cin >> N1;

    int arr1[100] = {0};

    // get the array elements from the user 
    for (int i = 0; i < N1; i++){
        cin >> arr1[i];
    }
    int x;
    cin >> x;

    int c = tripletSum(arr1, N1, x);
    cout << c << endl;
    

}