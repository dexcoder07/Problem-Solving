#include<bits/stdc++.h>
using namespace std;

vector<int> decode(vector<int> encoded, int first) {
    
    vector<int> result;
    result.push_back(first);
    int res = 0;
    int val = first;
    for(auto it : encoded){
        res = (it ^ val);
        result.push_back(res);
        val = res;
    }
    return result;
}


int main(){

    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    vector<int> res = decode(arr, arr[0]);

    for(auto it : res){
        cout << it << " ";
    }

    return 0;
}