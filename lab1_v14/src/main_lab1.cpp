# include "./task.h"

int main(void){
    string i;
    char o;
    char n;
    int a;
    cout<<"Введите целевую строку";
    getline(cin, i);
    cout<<"Что хотите заменить и на что хотите заменить?";
    cin>>o>>n>>a;
    cout<<replaces(i, o, n, a);
}