# include <string>
# include "./task.h"

using namespace std;

string replaces(string s, char old_v, char new_v, int n){
    string out=s;
    if (s.length()<n || n<=0){
        return(out);
    }else{
        int count = 0;
        for (size_t i=0; i<s.length(); i++){
            if (s[i]==old_v){
            count++;
              if (count==n){
                out[i]=new_v;
              }
            }
        }
    }return(out);
}