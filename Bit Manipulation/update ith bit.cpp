#include<bits/stdc++.h>
using namespace std;

// updating means changing 0 to 1 or 1 to 0 as per the user input

int set_bit(int n, int i){

    int mask = (1 << i);

    n = n|mask;

    return n;

}

int clear_bit(int n, int i)
{
    int mask = 1;
    mask = ~(mask << i);
    n = n&mask;
    return n;
}

void update_ith_bit(int n, int i, int val){

    int ans;

    if(val == 0){
        ans = clear_bit(n, i);
    }
    else{
        ans = set_bit(n, i);
    }

    return ans;
}


int main(){
    
    int n; cin >> n;

    int i; cin >> i;

    int value; cin >> value;

    update_ith_bit(n, i, value);

    return 0;
}