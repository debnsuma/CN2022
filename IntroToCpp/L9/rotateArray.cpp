#include <iostream>
using namespace std;


void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void rotate1(int *input, int d, int n)
{
    for(int i = 0; i < d; i++){
        int temp = input[0];
        for (int j = 0; j < n-1; j++){
            int temp2 = input[j];
            input[j] = input[j+1];
            input[j+1] = temp2;
        }
        input[n-1] = temp;
    }
}

void rotate2(int *input, int d, int n)
{
    int temp[100000] = {0};

    for(int i = 0; i < d; i++){
        temp[i] = input[i];
    }
    int k = 0;
    for(int i = d; i < n; i++){
        input[k] = input[i];
        k++;
    }
    k = 0;
    for(int i = n-d; i < n; i++){
        input[i] = temp[k];
        k++;
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
    int d;
    cin >> d;

    rotate2(arr1, d, N1);
    printarray(arr1, N1);   

}

