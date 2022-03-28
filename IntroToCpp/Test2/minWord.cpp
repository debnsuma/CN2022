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

void minLength(char input[], char output[]) {
    int len = getLength(input);
    
    int min_len = 1000000;
    int idx = 0;
    int count = 0;

    for(int i = 0; i < len; i++){
        if (input[i] != ' '){
            count++;
        } else{
            if (count < min_len){
                idx = i-count;
                min_len = count;
                // cout << "starts : " << str[idx]  << " ends : " << str[i-1] << " " << count <<endl;
            }
            count = 0;

        }
    }

    if (min_len == 1000000){
        output = input;
    } else{
        int j = 0;
        for (int i = idx; i < idx+min_len; i++){
            output[j] = input[i];
            j++;
        }
    }
    cout << output;
    cout << endl;

}

int main(){
    char mystring[1000000];
    char output[1000000];

    cin.getline(mystring, 1000000);

    minLength(mystring, output);
    
}