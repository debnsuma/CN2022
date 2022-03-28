#include <iostream>
using namespace std;

void print2Darray(int input[][1000], int row, int col){

   for (int i = 0; i < row; i++){
        int temp = row - i;

        while(temp > 0){
            for(int j = 0; j < col; j++){
                cout << input[i][j] << " ";
            }
            cout << endl;
            temp--;
        }
    }
    cout << endl;

}



int main(){

    int R, C;
    cin >> R >> C;

    int arr[1000][1000];

    // get the array elements from the user 
    for (int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cin >> arr[i][j];
        }
    }
    cout << "**************" << endl;
    print2Darray(arr, R, C); 

}