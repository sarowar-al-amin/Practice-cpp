#include<bits/stdc++.h>

using namespace std;

int findingNumber(vector<int> arr, int x){
    int len = arr.size();
    int minimum = INT_MAX;
    for(int i = 0; i < len; i++){
        int temp = max(arr[i], x) - min(arr[i], x);
        if(minimum > temp){
            minimum = temp;
        }
    }

    return minimum;
}

int main(){

    int n, q;
    cout <<"Enter the Array length: "<< endl;
    cin >> n;
    cout <<"\nEnter the query number: "<< endl;
    cin >> q;
    vector<int> arr;
    vector<int> query;

    cout << endl<<"Enter the array: "<< endl;;
    for(int i = 0; i < n; ){
        int x; 
        cin >> x;
        if(x > 0){
            arr.push_back(x);
            i++;
        }
    }

    cout <<"\nEnter the query: "<< endl;
    for(int i = 0; i < q; ){
        int x;
        cin >> x;
        if( x > 0){
            query.push_back(x);
            i++;
        }
    }
    //Calling findingNumber function
    for(int i = 0; i < q; i++){
        cout <<"Output: "<< findingNumber(arr, query[i]) << endl;
    } 
    return 0;
}
