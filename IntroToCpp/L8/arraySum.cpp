#include <iostream>
using namespace std;

int main(){

    int myarray[1000000];
    int n;
    cin >> n;
    int mySum = 0;

    for (int i = 0; i < n ; i++){
        cin >> myarray[i];
        mySum += myarray[i];
    } 

    cout << mySum << endl;
}