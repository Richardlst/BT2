#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a;
    cout<<a<<" ";
    while(cin>>b){
        if(b!=a){
            cout<<b<<" ";
            a=b;
        }
        if(b<0) break;
    }

return 0;
}
