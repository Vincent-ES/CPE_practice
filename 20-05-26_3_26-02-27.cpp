#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        //input database
        int data;
        cin>>data;
        string m[data] = {};
        int low[data] = {}, high[data] = {};
        for(int i = 0;i<data;i++){
            cin>>m[i]>>low[i]>>high[i];
        }

        //input price
        int query;
        cin>> query;
        int price[query] = {};
        for(int i = 0;i<query;i++){
            cin>>price[i];
        }

        for(int i = 0;i<query;i++){
            bool low_ac[data] = {}, 
            high_ac[data] = {}, 
            both_ac[data] = {};
            int count = 0;
            for(int j = 0;j<data;j++){
                if(price[i]>=low[j]){
                    low_ac[j] = 1;
                }
                if(price[i]<=high[j]){
                    high_ac[j] = 1;
                }
                both_ac[j] = (high_ac[j] && low_ac[j]);
                // cout<<"AC "<< high_ac[j]<<" "<<low_ac[j];
                if(both_ac[j]){
                    count++;
                }
                if(count>1){
                    break;
                }
            }

            if(count != 1){
                cout<<"UNDETERMINED\n";
            }
            else{
                for(int k = 0;k<data;k++){
                    if(both_ac[k]){
                        cout<<m[k]<<'\n';
                    }
                }
            }
        }
        cout<<'\n';
    }


    //bool a[10] = {true};
    //cout<<(a[0] && a[1]);
}


//passed all official cpe test cases