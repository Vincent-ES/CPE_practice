#include <iostream>
using namespace std;

int main(){
    int Case = 1;
    int column, row;
    while(cin>>column>>row && column && row){
        char arr[column+2][row+2] = {};
        for(int i = 1;i<column+1;i++){
            for(int j = 1;j<row+1;j++){
                cin>>arr[i][j];
                if(arr[i][j] != '*'){
                    arr[i][j] = '0';
                }

                
            }
        }

        for(int i = 1;i<column+1;i++){
            for(int j = 1;j<row+1;j++){
                for(int k = -1;k<2;k++){
                    for(int r = -1;r<2;r++){
                        if(arr[i][j] == '*'){
                            if(arr[i+k][j+r] != '*')
                                arr[i+k][j+r] += 1;
                        }
                    }
                }
            }
        }

        cout<<"Field #"<<Case<<":\n";
        Case++;
        for(int i = 1;i<column+1;i++){
            for(int j = 1;j<row+1;j++){
                cout<<arr[i][j];
            }
            cout<<'\n';
        }
        cout<<'\n';
    }
}

//Passed all cpe test cases