#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printPrime(int n){
    for(int i = 1; i*i<=n; i++){
        if(i*i == n) cout<<i;
        else if(n%i == 0) cout<<i<<" "<<n/i<<" ";
    }
}

int main(){
    int n; cin>>n;
    printPrime(n);
    return 0;
}