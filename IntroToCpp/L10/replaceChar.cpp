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

void replaceCharacter(char input[], char c1, char c2) {
    int length = getLength(input);
    for(int i = 0; i < length; i++){
        if(input[i] == c1){
            input[i] = c2;
        }
    }
}

int main(){
    char mystring[1000000];
    cin >> mystring;

    char c1, c2;
    cin >> c1 >> c2;
    replaceCharacter(mystring, c1, c2);
    cout << mystring << endl;


    
}