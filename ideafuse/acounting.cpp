#include<iostream>
#define ll long long
using namespace std;

int main(){
    ll t; cin>>t;
    ll m[t], k[t];
    for(ll i = 1; i <= t; i++){
        cin>>m[i]>>k[i];
    }
    for(ll i = 1; i <= t; i++){
        while(m[i] != k[i]){
            m[i] += 7;
            k[i] -= 5;
            if(m[i] > k[i]){
                cout<<"Case #"<<i<<": impossible"<<endl;
                break;
            }
        } if(m[i] == k[i]){
            cout<<"Case #"<<i<<": "<<m[i]<<endl;
        }
    }
}