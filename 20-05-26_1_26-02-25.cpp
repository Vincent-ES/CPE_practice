#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int x;
    string s;
    while(cin>>x){
        cin.ignore();
        getline(cin, s);
        int a[10000] = {};
        int j = 0;
        string temp;
        for(int i = 0;i<s.length();i++){
            if((s[i]<='9' && s[i]>='0') || s[i] == '-'){
                temp += s[i];
            }
            else{
                if(temp != ""){
                a[j] = stoi(temp);
                j++;
                temp = "";
                }
            }
        }
        if(temp != ""){
            a[j] = stoi(temp);
            j++;
        }
        // for(int i = 0;i<10;i++){
        //     cout<<a[i]<<" ";
        // }

        long long int sum = 0;
        // cout<<"j"<<j<<" ";
        for(int k = 0;k<j-1;k++){
            sum += (j-k-1)*a[k]*pow(x, j-k-2);
        }
        cout<<sum<<'\n';
    }
}

//Passed official test case A and case B.