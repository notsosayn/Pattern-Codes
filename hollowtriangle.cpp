#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter an odd number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        //for spaces and stars right diagonal
        for(int j=1;j<=n-(i-1);j++){
            if(j==n-(i-1)){
                cout<<"* ";
            }else{
            cout<<"  ";
            }
        }
        //inner space and left diagonal
        for(int j=2;j<=(2*i)-1;j++){
            if((j==2*i-1)||i==n){
                cout<<"* ";
            }else{
            cout<<"  ";
            }
        }cout<<endl;
    }
    return 0;
}