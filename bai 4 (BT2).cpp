#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, n, y, m, k;
    cin>>n;
    m=2*n-1;
    k=n-1;
    for(y=0; y<n; y++){
        for(x=-k; x<=k; x++){
            if(2*abs(x)<m) cout<<"*";
            else cout<<" ";
        }
        m-=2;
        cout<<endl;
    }
return 0;
}
