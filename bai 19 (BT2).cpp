#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Tong so mon hoc can tinh DTB: ";
    int n, t=0, hs=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"Diem mon hoc "<<i<<" : ";
        int j;   cin>>j;
        if(j<0||j>10){
            cout<<"Nhap lai diem mon hoc "<<i<<" (trong khoang tu 0..10):"<<endl;
            i--;
            continue;
        }
        cout<<"He so mon hoc "<<i<<" : ";
        int q;   cin>>q;
        t+=j*q;
        hs+=q;
        }
    cout<<"So mon hoc: "<<n<<endl;
    cout<<"Tong so he so: "<<hs<<endl;
    cout<<"Diem trung binh cua "<<i<<" mon hoc: "<<setprecision(2)<<fixed<<(1.0*t)/hs;
return 0;
}
