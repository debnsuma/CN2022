#include <iostream>
#include <cstring>

using namespace std;

int getLength(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }

    return count;
}

bool checkPalindrome(char str[]) {
    int len = getLength(str);
    int mid = len / 2;

    for (int i=0; i <= mid; i++){
        if (str[i] != str[len-i-1]){
            return false;
        }
    }

    return true;
}

int main(){
    char mystring[1000000];
    cin >> mystring;

    int chkpal =  checkPalindrome(mystring);
    if (chkpal){
        cout << "true" << endl;
    } else{
        cout << "false" << endl;
    }
    
}