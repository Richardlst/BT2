#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    cin>>n;
    if(n<=150) t= 100*12000 + (n-100)*16000;
    if(n>150&&n<=200) t= 100*12000 + 50*16000+ (n-150)*20000;
    if(n>200) t= 100*12000 + 50*16000+ 50*20000+ (n-200)*25000;
    cout<<t;
return 0;
}
