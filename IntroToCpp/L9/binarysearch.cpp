#include <iostream>
using namespace std;

int binarySearch(int *input, int n, int val)
{
    int start = 0;
    int end = n-1;

    int result = -1;

    while(start <= end){
        int mid = (end + start)/2;

        if (input[mid] == val){
            return mid;
        } else if (val < input[mid]){
            end = mid-1;
        } else {
            start = mid+1;
        }
        // cout << " mid : " << input[mid] << " start : " <<  start << " end : " << end << " val : " << val << endl;;

    }

    return result;
}

int main(){

    int N;
    cin >> N;

    int arr[100000] = {0};

    // get the array elements from the user 
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    int val;
    cin >> val;
    signed int result = binarySearch(arr, N, val);
    cout << result << endl;
    

}