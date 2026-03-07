#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long converttd(string s, int from){
    long long dec = 0;
    for(int i = 0;i<s.length();i++){
        int digit;
        if(s[i]<='9' && s[i] >= '0'){
            digit = s[i] - '0';
        }
        else{
            digit = s[i] - 'A' + 10;
        }
        dec = dec * from + digit; 
    }
    return dec;
}

int main(){
    string s;
    while(cin>>s){
        int from, to;
        cin>>from>>to;
        long long dec = converttd(s, from);
        if(to == 10){
            string dec_str = to_string(dec);
            if(dec_str.length()>7){
                cout<<dec%10000000;
                cout<<'\n';
                continue;
            }
            for(int i = 0;i<7-dec_str.length();i++){
                cout<<'0';
            }
            cout<<dec<<'\n';
            continue;
        }
        string ss = "";
        if (dec == 0){
            ss = "0";
        }
        while(dec > 0){
            long long remainder = dec % to;
            if(remainder <= 9){
                ss += '0' + remainder;
            }
            else{
                ss += 'A' + remainder - 10;
            }
            dec /= to;
        }
    

        if(ss.length()>7){
                for(int i = 6;i>=0;i--){
                    cout<<ss[i];
                }
                cout<<'\n';
                continue;
            }
        reverse(ss.begin(), ss.end());
        for(int i = 0;i<7-ss.length();i++){
                cout<<'0';
            }
        cout<<ss<<'\n';
    }
}