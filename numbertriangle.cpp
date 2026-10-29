#include <iostream>
using namespace std;

int main(){

int n;
cout<<"Enter a number: ";
cin>>n;

for(int i=1;i<=n;i++){
    
    //for spaces
    for(int j=1;j<=n-i+1;j++){
        cout<<"  ";
    }
    for(int j=1;j<=2*i-1;j++){
        if(j<=i){
        cout<<i+j-1<<" ";
        }else{
            cout<<3*i-1-j<<" ";
        }
    }cout<<endl;
}


    return 0;
}