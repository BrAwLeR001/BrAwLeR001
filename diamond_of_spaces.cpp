#include <iostream>
using namespace std;

int main(){
    

    int n;
    cin>>n;
    int x = (n/2) +1;
    for (int i =x;i>0;i--){
        for (int j =0;j<i;j++){
            cout<<"*"<<"\t";
        }

        for (int k =2*(x-i)+1;k>0;k--){
            cout<<"\t";
        }

        for (int j =0;j<i;j++){
            cout<<"*"<<"\t";
        }

        cout<<"\n";

    }

    for (int i =2;i<=x;i++){
        for (int j =0;j<i;j++){
            cout<<"*"<<"\t";
        }

        for (int k =2*(x-i)+1;k>0;k--){
            cout<<"\t";
        }

        for (int j =0;j<i;j++){
            cout<<"*"<<"\t";
        }

        cout<<"\n";

    }


}