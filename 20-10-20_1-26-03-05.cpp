#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int day, party;
        cin>>day>>party;
        int hartal[party] = {};
        for(int i = 0;i<party;i++){
            cin>>hartal[i];
        }
        bool loss[day] = {};
        for(int i = 0;i<party;i++){
            int k = 1;
            while(k*hartal[i]<=day){
                loss[k*hartal[i]-1] = 1;
                k++;
            }
        }

        int count = 0;
        for(int i = 0;i<day;i++){
            if(loss[i] && !((i % 7 == 5) || (i % 7 == 6))){
                count++;
            }
        }

        cout<<count<<'\n';

    }

}