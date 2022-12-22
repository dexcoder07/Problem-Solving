#include<bits/stdc++.h>
using namespace std;

void clear_bits_range(int &n, int i, int j){

    int a = -1 << j+1;
    int b = 1 << i -1;
    int mask = a|b;

    n = n&mask;
}

void replace_bits_(int n, int m, int i, int j){
    clear_bits_range(n, i, j);
    int mask = m << i;

    n = n | mask;

    cout << n;
}


int main(){

    int n,i,j,m;
    cin >> n >> m >> i >> j;

    replace_bits_(n,m,i,j);

    return 0;
}