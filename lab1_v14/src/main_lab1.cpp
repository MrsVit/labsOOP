# include "./task.h"

int main(void){
    string target;
    char out;
    char n;
    int a;
    cout<<"Enter string"<<endl;
    getline(cin, target);
    cout<<"What do you want to replace it with?";
    cin>>out>>n>>a;
    cout<<replaces(target, out, n, a);
}