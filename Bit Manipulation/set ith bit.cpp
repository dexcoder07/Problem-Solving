#include<bits/stdc++.h>
using namespace std;

// set a bit means changing the ith bit value to 1

int set_bit(int n, int i){

    int mask = (1 << i);

    n = n|mask;

    return n;

}


int main(){
    
    int n;
    cin >> n;

    int i;
    cin >> i;

    cout << set_bit(n, i);
    return 0;
}