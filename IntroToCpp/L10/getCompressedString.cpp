#include <iostream>
using namespace std;

string gen_compressed_str(string str) 
{ 
    
    char output[1000000]; 
    int ix = 0;

    int len = str.length(); 
    for (int i = 0; i < len; i++) { 
  
        // Count occurrences of current character 
        int count = 1; 
        while (i < len - 1 && str[i] == str[i + 1]) { 
            count++; 
            i++; 
        }
        // Print character and its count
        if (count == 1)
        {
        //   cout << str[i];
          output[i] = str[i];
          i++;
        }
        else
        {
        //   cout << str[i] << count;
          output[i] = str[i];
          i++;
          output[i] = count;
          i++;

        }
         
    } 
    cout << output;
    return output;
} 

int main() {
  
  string str = "xxxxxxxxx"; 
  string output = gen_compressed_str(str); 
}