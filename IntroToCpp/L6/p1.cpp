#include <iostream>
using namespace std;

// int main(){
//     int x, y = 1;
//     x = 10;
//     if (x != 10 && x / 0 == 0){
//         cout << y;
//     } else {
//         cout << ++y;
//     }
// } 


// int main(){   
//     // int x = 15;
//     // int y = x++;
//     // int z = ++x;
//     // cout << y << " " << z;

//     int g = 3;
//     cout << (++g * 8);
// }

int main()
{
    int x = 10;
    int y = 20;
    if(x++ > 10 && ++y > 20 ){
    cout << "Inside if ";
    } else{
    cout << "Inside else ";
    }
    cout << x << " " << y;
}