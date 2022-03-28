#include <iostream>
using namespace std;


void arrange(int arr[], int n){

    int start = 1;
    int end;
    bool flag = true;
    for (int i = 1; i <= n; i++){
        if(start <= n){
            arr[i-1] = start;
            end = start - 1;
            start += 2;
        } else {
            if ((n % 2 == 0) && flag){
                end += 2;
                flag = false;        
            }
            arr[i-1] = end;
            end -= 2;

        }
    }
}

void printarray(int arr[], int n){

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}
int main(){
    int num_tc = 0;
    cin >> num_tc;

    int arr[10000] = {0};

    // take the size of each array 
    int metaArr[100];
    for (int i = 0; i < num_tc ; i++){
        cin >> metaArr[i];
    }

    for (int i = 0; i < num_tc ; i++){
        arrange(arr, metaArr[i]);
        printarray(arr, metaArr[i]);
        int arr[10000] = {0};
    }   


}
