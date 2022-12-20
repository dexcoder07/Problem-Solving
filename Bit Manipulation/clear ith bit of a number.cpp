#include<bits/stdc++.h>
using namespace std;

// 1101 -> 1001 ----> changed the 3 digit from right side to 0

int clear_bit(int n, int i)
{
    int mask = 1;
    mask = ~(mask << i);
    n = n&mask;
    return n;
}
int main(){
    
    int n;
    cin >> n;

    int i;
    cin >> i;

    clear_bit(n, i);
    return 0;
}