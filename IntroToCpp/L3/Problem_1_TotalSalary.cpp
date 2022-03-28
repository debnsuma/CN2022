#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int basic; 
    float hra, da, allow, pf;
    char grade;

    cout << "Base salary & Grade(separated by space) : " << endl ;
    cin >> basic >> grade ;

    hra = .2 * basic;
    da = .5 * basic;
    pf = .11 * basic;
    if (grade == 'A' || grade == 'a'){
        allow = 1700;
    } else if (grade == 'B' || grade == 'b'){
        allow = 1500;
    } else {
        allow = 1300;
    }

    float salary = basic + hra + da + allow - pf;
    salary = salary + .5;
    cout << int(salary) << endl;


}
