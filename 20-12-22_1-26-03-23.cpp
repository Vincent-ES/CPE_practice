#include <iostream>
using namespace std;

int soda(int num, int required){
    if(num == 0){
        return 0;
    }
    int new_drink = num/required;
    int left = new_drink + num%required;
    if(!new_drink){
        return 0;
    }

    return new_drink + soda(left, required);

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        cout<<soda(a+b, c)<<'\n';
    }
}

//Virtual judge AC
//Zero judge AC