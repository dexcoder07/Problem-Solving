#include<bits/stdc++.h>
using namespace std;

void clear_last_ith_bit(int n, int i){

    int mask = (-1)<<i;

    n = n&mask;

    cout << n;
}


int main(){
    
    int n; cin >> n;

    int i; cin >> i;

    clear_last_ith_bit(n, i);
    return 0;
}