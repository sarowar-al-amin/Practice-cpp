#include<bits/stdc++.h>

using namespace std;

// Declaring and defining function
int maxFrequency(vector<int> arr){
    int frequency = 0;
    int len = arr.size();

    vector<int> map;
    // int map[len];
    sort(arr.begin(), arr.end());
    map.push_back(arr[0]);

    int count = 1;
    int j = arr[0];

    for(int i = 1; i < len; i++){
        if(j == arr[i]){
            count++;
        }else
        {
            /* code */
            
            map.push_back(count);
            count = 1;
            j = arr[i];
        }

    }

    frequency = map[0];
    for(int i = 1; i < map.size(); i++){
        // cout << map[i] <<" ";
        if(frequency < map[i]){
            frequency = map[i];
        }
    }

    // cout << "\nLength of the map: "<< map.size() << endl;

    return frequency;
}

// Main function starts here
int main(){

    int number;
    vector<int> arr;
    cout <<"Enter the number: "<< endl;
    cin >> number;
    cout <<"Enter the elements to the array: "<<endl;
    for(int i  = 0; i < number; ){
        int x; 
        cin >> x;
        if (x > 0 && x < 101){
            arr.push_back(x);
            i++;
        }
    }

    cout <<"Minimum number of deletions: " << number - maxFrequency(arr)<< endl;


    return 0;
}