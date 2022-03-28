#include <iostream>
using namespace std;

int findMyNum(){

    int number;
    int myArray[100000];
    int lengthofArray;
    
    cin >> lengthofArray; 

    // save the arragy 
    for(int i = 0; i < lengthofArray ; i++){
        cin >> myArray[i];
    }

    // get the number to find 
    cin >> number;

    // find the number if its present 

    bool found = false;
    signed int numIndex = -1;

    for (int i = 0; i < lengthofArray ; i++){
        if (myArray[i] == number){
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
        // cout << "TC number :" << i+1 << endl;
        result_indexes[i] = findMyNum();
        i++;
    }

    for (int i=0; i < num_tc; i++){
        cout << result_indexes[i] << endl;
    }

}