#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, j, n;
    cin>>n;
    for(i=n-1; i>=0; i--){
        for(j=0; j<n; j++){
            int val = j - i%n;
            if(val<=0){
                val+=n;
                cout<<val<<" ";
            }
            else cout<<val<<" ";
        }
        cout<<endl;
    }

return 0;
}
