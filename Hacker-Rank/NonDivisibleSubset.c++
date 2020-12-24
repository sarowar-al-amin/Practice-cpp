#include<bits/stdc++.h>

using namespace std;

int nonDivisibleSubset(vector<int> ar, int k){
    
    int len = ar.size();
    int reminder[k];
    for(int i = 0; i < k; i++){
        reminder[i] = 0;
    }

    // Now time to update reminder's elements
    for(int i = 0; i < len; i++){
       reminder[ar[i] % k] += 1; 
    }
    int value = 0;
    value = min(reminder[0], 1);
    if(k%2 == 0){
        value += min(reminder[k/2], 1);
    }

    for(int i = 1; i <(k/2 + 1); i++){
        if(i != (k - i)){
            value += max(reminder[i], reminder[k - i]);
        }
    }
    return value;
}

int main(){

    int length, number;
    vector<int> arr;
    cout <<"Enter the length of the array: "<< endl;
    cin >> length;
    cout <<"\nEnter the number that has the role of k : "<< endl;
    cin >> number;

    
    cout<<"\nEnter the elements of the array: "<< endl;
    for(int i = 0; i < length; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << endl;
    int result = nonDivisibleSubset(arr, number);

    cout <<"\nMaximum length of non-divisable subset is: "<< result <<" ." << endl;
    cout << endl;

    return 0;
}