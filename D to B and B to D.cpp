#include<bits/stdc++.h>
using namespace std;

class Decimal_to_Binary{

public:

// using the concept of N divided by 2;
    int Method1(int n){
        int sum = 0;
        int i = 0;

        while(n){
            int x = n%2;
            sum += x * pow(10, i);
            n = n/2;
            i++;
        }

        return sum;
    }

// using the concept of Bit manipulation
    int Method2(int n){
        int sum = 0;
        int i = 0;

        while(n){
            int x = n&1;
            sum += x * pow(10,i);
            n = n >> 1;
            i++;
        }

        return sum;
    }
};


class Binary_to_Decimal{

public:
    int Convert_number(int n){
        int sum = 0;
        int i = 0;

        while(n){
            int x = n%10;
            sum += x * pow(2,i);
            n = n/10;
            i++;
        }
        return sum;
    }
};

int main(){
    
    cout << "Enter N in decinal value";
    int n;
    cin >> n;
    cout << "Enter M in binary value";
    int m;
    cin >> m;


    Decimal_to_Binary *obj = new Decimal_to_Binary();
    cout << "Conversion of N into Binary\n";
    cout << obj->Method1(n);
    Binary_to_Decimal *obj2 = new Binary_to_Decimal();
    cout << "Conversion of N into Decimal\n";
    cout << obj2->Convert_number(m);
    return 0;
}