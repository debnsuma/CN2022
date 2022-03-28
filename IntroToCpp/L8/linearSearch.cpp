#include <iostream>
using namespace std;

signed int linearSearch(int arr[], int n, int val){

    bool found = false;
    signed int numIndex = -1;

    for (int i = 0; i < n ; i++){
        if (arr[i] == val){
            if (!found){
                found = true;
                numIndex = i;
            } else {
                continue;
            }
        }

    }

    // return the index
    return numIndex;
}

int main(){

    int num_tc = 0;
    cin >> num_tc;

    int result_indexes[100];
    int i = 0;

    while (i < num_tc){
        cout << "TC number :" << i+1 << endl;
        int myArray[100000];
        int lengthofArray;
        int val;

        cin >> lengthofArray;
        for(int i = 0; i < lengthofArray ; i++){
            cin >> myArray[i];
        }

        // get the number to find 
        cin >> val;   
        result_indexes[i] = linearSearch(myArray, lengthofArray, val);
        i++;
    }

    for (int i=0; i < num_tc; i++){
        cout << result_indexes[i] << endl;
    }    
}