#include <iostream>
using namespace std;

int main(){
    int n,i;
    int t1=1, t2=1, nextterm= 0;

    cin >> n;


    if (n == 1){
        cout << n << endl;

    } else{
        nextterm = t1 + t2;
        for (i=3; i<=n; ++i){
            t1 = t2;
            t2 = nextterm;
            nextterm = t1 +t2;
        }
        cout << t2 <<endl;
    }

}