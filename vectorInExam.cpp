#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>d[n+1];
    for(int i=1 ; i<=n ; i++){
        for(int j=i ; j<=n ; j = j+i ){
            d[j].push_back(i);
            cout<<d[j][0]<<"\n";
//    for(int i = 1; i<=n; i++){
//        cout<<"p";
//    }
}
    }
}

