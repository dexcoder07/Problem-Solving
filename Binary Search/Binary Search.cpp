#include<bits/stdc++.h>
using namespace std;

bool b_search(vector<int> arr, int key){

    int start = 0;
    int end = arr.size()-1;

    while(start <= end){
        int mid = ((start+end)/2);

        if(key == arr[mid]){
            return true;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
    }
    return false;
}


int b_rec_search(vector<int> arr, int k, int start, int end){

    if(start > end){
        return -1;
    }

    if(arr[mid] == k){
        return mid;
    }
    else if(arr[mid] < k){
        return b_rec_search(arr, k, mid+1, end);
    }
    else{
        return b_rec_search(arr, k, start, end-1);
    }
}


int main(){
    
    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int key;
    cin >> key;
    cout << b_search(arr, key);
    return 0;
}