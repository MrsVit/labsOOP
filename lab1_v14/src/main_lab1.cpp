# include "./task.h"

int main(void){
    string input;
    char old_value;
    char new_value;
    int n;
    getline(cin, input);
    cin>>old_value>>new_value>>n;
    cout<<replaces(input, old_value, new_value, n);

}