#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    int i = 1;
    char k = 'A';

    while (i <= N){
        int j=1;
        k = k + i - 1;
        while (j <= N){
            cout << k;
            k++;
            j++;
        }
        k = 'A';
        cout << endl;
        i++;
    }
}

// #include <iostream>
// using namespace std;

// int main(){

//     int N;
//     cin >> N;
//     int i = 1;

//     while (i <= N){
//         int j=1;
//         char k = 'A' + i - 1;
//         while (j <= N){
//             cout << k;
//             k++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }
