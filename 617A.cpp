#include<bits/stdc++.h>
using namespace std;

int main(){
    long x,step=0;
    cin>>x;
    step=x/5;
    if(x%5 == 0) cout<<step;
    else cout<<step+1;



    return 0;
}