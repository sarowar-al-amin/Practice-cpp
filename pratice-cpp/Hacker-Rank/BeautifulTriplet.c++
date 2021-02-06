#include<bits/stdc++.h>

using namespace std;

int main(){

    int lengthOfArray, distance;
    cout <<"Enter the length of the list: "<< endl;
    cin >> lengthOfArray;
    cout << endl;
    cout <<"Enter the distance: "<< endl;
    cin >> distance;
    cout << endl;

    int arr[lengthOfArray];
    
    cout <<"Enter the array elements: "<< endl;
    for(int i = 0; i < lengthOfArray; i++){
        cin >> arr[i];
    }
    cout << endl;

    int count = 0;

    // Finding beautiful triplets 
    for(int i = 0; i < lengthOfArray - 2; i++){
        for(int j = i + 1; j < lengthOfArray; j++){
            if((arr[j] - arr[i]) == distance){
                for(int k = j + 1; k < lengthOfArray; k++){
                    if((arr[k] - arr[j]) == distance){
                        count++;
                        j = lengthOfArray;
                        k = lengthOfArray;
                    }
                }
            }
        }
    }


    cout <<"\nNumber of beautiful triplet is: " << count << endl;


}