#include <iostream>
using namespace std;

int main(){
    
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    cin>>n;
    for (int i =n;i>=1;i--){
        for (int j =1;j<=n-i;j++){
            cout<<"	";
        }

        for (int k =1;k<=i;k++){
            cout<<"*"<<"	";
        }
        cout<<"";
    }
}