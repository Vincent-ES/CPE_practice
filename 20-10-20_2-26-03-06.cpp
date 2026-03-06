#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    while(getline(cin , s)){
        for(int i = 0;i<s.length();i++){
            char a = s[i] - 7;
            cout<<a;
        }
        cout<<'\n';
    }
}