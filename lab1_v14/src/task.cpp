# include <string>
# include "./task.h"

using namespace std; //знаю, что так делать не стоит, но я точно где-нибудь потеряю std::

string replaces(string input, char old_value, char new_value, int n){
    string output=input;
    if (input.length()<n || n<=0){
        return(output);
    }else{
        int count = 0;
        for (size_t i=0; i<input.length(); i++){
            if (input[i]==old_value){
            count++;
              if (count==n){
                output[i]=new_value;
              }
            }
        }
    }return(output);
}