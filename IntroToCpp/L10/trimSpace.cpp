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

void trimSpaces(char str[])
{
    // To keep track of non-space character count
    int count = 0;
 
    // Traverse the given string. If current character
    // is not space, then place it at index 'count++'
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; // here count is
                                   // incremented
    str[count] = '\0';
}

int main(){
    char mystring[1000000];
    cin.getline(mystring, 1000000);
    
    trimSpaces(mystring);
    cout << mystring << endl;


    
}