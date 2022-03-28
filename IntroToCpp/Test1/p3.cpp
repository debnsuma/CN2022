#include <iostream>
#include <climits>

using namespace std;
int main(){

    int N;
    cin >> N;

    bool first_num = true;
    bool duplicate = true;
    int first_largest;
    int second_largest;

    int i = 1;
    while(i <= N){
        int present_num;
        cin >> present_num;

        if(first_num){
            first_num = false;
            first_largest = present_num;
            second_largest = present_num;
            
        } else {
            if ((present_num > first_largest) && (present_num > second_largest)){
                second_largest = first_largest;
                first_largest = present_num;
                duplicate = false;
            } else if ((present_num < first_largest) || (present_num > second_largest)){
                second_largest = present_num;
                duplicate = false;
            }
        }
        i++;

    }
    if (duplicate){
        cout << INT_MIN << endl; 
    } else if (N <= 1 || (N==2 && (first_largest == second_largest))){
        cout << INT_MIN << endl;
    } else {
        cout << second_largest << endl;
    }
}