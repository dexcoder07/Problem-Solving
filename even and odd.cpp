#include<bits/stdc++.h>
using namespace std;

class Even_ODD{

public:

// using divisiblity by 2
    void Method1(int n){
        if(n%2 == 0){
            cout << "Even Number";
        }
        else{
            cout << "Odd Number";
        }
    }

// using bit manipulation method
    void Method2(int n){
        if(n&1){
            cout << "Odd Number";
        }
        else{
            cout << "Even Number";
        }
    }

};


int main(){
    
    int n;
    cin >> n;

    Even_ODD *obj = new Even_ODD();
    cout << "output using method 1: \n";
    obj->Method1(n);
    cout << "\n";
    cout << "output using method 2: \n";
    obj->Method1(n);
    return 0;
}