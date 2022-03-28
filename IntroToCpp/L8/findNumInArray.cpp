#include <iostream>
using namespace std;


int main(){
    int number;
    int myArray[100000];
    int lengthofArray;
    
    cin >> number;
    cin >> lengthofArray; 

    bool found = false;
    signed int numIndex = -1;
    for (int i = 0; i < lengthofArray ; i++){
        cin >> myArray[i];

        if (myArray[i] == number){
            if (!found){
                found = true;
                numIndex = i;
            } else {
                continue;
            }
        }

    }

    cout << numIndex << endl;

}