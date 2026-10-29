#include <iostream>
using namespace std;

int main(){

int n;
cout<<"Enter a number: ";
cin>>n;

for(int i=1;i<=2*n;i++){
    if(i<=n){
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }cout<<endl;
    }else{
    for(int j=1;j<=2*n-i+1;j++){
        cout<<"* ";
    }cout<<endl;
    }
}
    return 0;
}