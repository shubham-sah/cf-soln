#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,m,a,res;
    cin>>n>>m>>a;


    res = n%a == 0 ? n/a : n/a+1;
    res = res*(m%a == 0 ? m/a : m/a+1);
    cout<<res;

    


}