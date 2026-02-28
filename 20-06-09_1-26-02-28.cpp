#include <iostream>
using namespace std;

int main(){
    int query;
    while(cin>>query && query){
        int div_x, div_y;
        cin>>div_x>>div_y;

        int x, y;
        while(query--){
            cin>>x>>y;
            if(x == div_x || y == div_y){
                cout<<"divisa\n";
                continue;
            }

            if(x>div_x && y>div_y){
                cout<<"NE\n";
            }
            else if(x>div_x && y<div_y){
                cout<<"SE\n";
            }
            else if(x<div_x && y>div_y){
                cout<<"NO\n";
            }
            else {
                cout<<"SO\n";
            }
        }
    }
}

//Passed all official tests