#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;

    if(n == pow(4, (int)(log(n)/log(4)))){
        cout << "Power of 4";
    }
    else{
        cout << "Not power of 4";
    }
    return 0;
}