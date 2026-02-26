#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int num;
    while(cin>>num && num){
        cout<<"Original number was "<<num<<'\n';

        int check[10000] = {};
        int count = 0;
        bool same = false;
        while(!same){
            string s = to_string(num);
            int s_len = s.length();
            string dsc = "", asc = "";
            sort(s.begin(), s.end());

            for(int i = 0;i<s_len;i++){
                asc += s[i];
                dsc += s[s_len-i-1];
            }
            int asc_i = stoi(asc), dsc_i = stoi(dsc);
            num = dsc_i - asc_i;
            cout<<dsc_i<<" - "<<asc_i<<" = "<<num<<'\n';
            for(int i = 0;i<count;i++){
                if(check[i] == num){
                    same = true;
                    break;
                }
            }

            if(!same){
                check[count] = num;
            }
            count++;
        }
        cout<<"Chain length "<<count<<'\n'<<'\n';
        





    }



}