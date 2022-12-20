#include<bits/stdc++.h>
using namespace std;

int Method1(int n, int i)
{
    // using loop
    while(i--){
        n = n >> 1;
    }
    return (n&1);
}


int Method2(int n, int i){
    n = n >> i;

    return (n&1);
}

int Method3(int n, int i){

    int mask = 1;
    mask = mask << i;

    return (n&mask) > 0 ? 1 : 0;
}


int main(){
    
    int n;
    cin >> n;

    int i;
    cin >> i;
    cout << Method2(n, i-1);
    return 0;
}