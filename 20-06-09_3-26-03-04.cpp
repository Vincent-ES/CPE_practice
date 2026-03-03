#include <iostream>
#include <algorithm>
using namespace std;
const char dna[4] = {'A', 'C', 'G', 'T'};
int main(){
    int t, m, n;
    cin>>t;
    while(t--){
        cin>>m>>n;
        string arr[m] = {};
        for(int i = 0;i<m;i++){
            cin>>arr[i];
        }
        int distance = 0;
        for(int i = 0;i<n;i++){
            int num[4] = {};
            for(int j = 0;j<m;j++){
                for(int k = 0;k<4;k++){
                    if(arr[j][i] == dna[k]){
                        num[k]++;
                        break;
                    }
                }
            }

            int Max = 0;
            int flag = 0;
            for(int x = 0;x<4;x++){
                //cout<<"num"<<num[x]<<" ";
                if(num[x]>Max){
                    Max = num[x];
                    flag = x;
                }
            }
            //cout<<'\n';

            for(int x = 0;x<4;x++){
                if(x != flag){
                    distance += num[x];
                }
            }

            cout<<dna[flag];
        }
        cout<<'\n'<<distance<<'\n';
        
    }
}

//Passed all cpe test cases