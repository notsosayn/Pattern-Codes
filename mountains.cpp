#include <iostream>
using namespace std;

int main(){
    int n, peaks;
    cout<<"Enter height: ";
    cin>>n;
    cout<<"Enter number of peaks: ";
    cin>>peaks;

    for(int i=1;i<=n;i++){
        for(int p=1;p<=peaks;p++){
            for(int j=1;j<=n-i;j++) cout<<"  ";      // left spaces
            for(int j=1;j<=2*i-1;j++) cout<<"* ";    // stars
            for(int j=1;j<=n-i;j++) cout<<"  ";      // right spaces
        }
        cout<<endl;
    }
    return 0;
}


//Sample Output for n=4 and peaks=2 
//______* ____________* ______
//____* * * ________* * * ____
//__* * * * * ____* * * * * __
//* * * * * * * * * * * * * *