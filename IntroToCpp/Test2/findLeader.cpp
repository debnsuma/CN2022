#include <iostream>
using namespace std;

void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void Leaders(int arr[], int size) {

    for (int i=0; i < size; i++){
        for(int j = i; j < size; j++){
            if (arr[i] < arr[j]){
                break;
            } 
            if (j == size-1){
                cout << arr[i] << " ";
            }
        } 
    }

    cout << endl;
}

void leaderprint(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                break;
            }

            if (j == n - 1)
                cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main(){

    int N;
    cin >> N;

    int arr[100000] = {0};

    // get the array elements from the user 
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    Leaders(arr, N);
    // leaderprint(arr, N);
    

}