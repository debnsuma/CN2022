// #include <iostream>
// using namespace std;

// int main(){

//     char a;
//     cout << "Enter a character : " << endl;
//     cin >> a;

//     int b = a;
//     if (b >= 65 && b <= 90){
//         cout << 1 << endl;
//     } else if (b >= 97 && b <= 122) {
//         cout << 0 << endl;
//     } else {
//         cout << -1 << endl;
//     }
// }

#include <iostream>
using namespace std;

int main(){

    char a;
    cout << "Enter a character : " << endl;
    cin >> a;

    if (a >= 65 && a <= 90){
        cout << 1 << endl;
    } else if (a >= 97 && a <= 122) {
        cout << 0 << endl;
    } else {
        cout << -1 << endl;
    }
}