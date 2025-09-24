# include "./task.h"

int main(void){
    string input;
    char old_value;
    char new_value;
    int a;
    cout<<"Введите целевую строку";
    getline(cin, input);
    cout<<"Что хотите заменить и на что хотите заменить?";
    cin>>old_value>>new_value>>a;
    cout<<replaces(input, old_value, new_value, a);
}