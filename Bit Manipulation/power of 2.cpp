#include<bits/stdc++.h>
using namespace std;

void power_of_2(int n){


    if((n&(n-1)) == 0){
        cout << "power of 2";
    }
    else{
        cout << "not power of 2";
    }
}

int main(){

    int n;
    cin >> n;

    power_of_2(n);

    return 0;
}