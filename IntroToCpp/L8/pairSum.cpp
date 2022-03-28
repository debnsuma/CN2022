#include <iostream>
#include <climits>
using namespace std;

void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int pairSum(int *input1, int size1, int x)
{
    int c = 0;
    for(int i = 0; i <= size1-1; i++){
        for (int j = i+1; j < size1; j++){
            if (input1[i] + input1[j] == x){
                c += 1;
            }
        }
        
    }

    return c;

}

int main(){

    int N1;
    cin >> N1;

    int arr1[100000] = {0};

    // get the array elements from the user 
    for (int i = 0; i < N1; i++){
        cin >> arr1[i];
    }
    int x;
    cin >> x;

    int c = pairSum(arr1, N1, x);
    cout << c << endl;
    

}