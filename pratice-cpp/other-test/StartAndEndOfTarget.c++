#include<bits/stdc++.h>

using namespace std;


int leftIndex(int arr[], int left,int right, int target, int length){
    int index = -1;
    int mid = (left + right)/2;
    if(arr[mid] == target){
        while((arr[mid - 1] == target && mid > 0)){
            mid--;
        }
        index = mid;
        // return index;
    }else if(arr[mid] > target && (mid > 0)){
        index = leftIndex(arr, left, mid - 1, target, length);
    }else if(arr[mid] < target && (mid < length - 1)){
        index = leftIndex(arr, mid + 1, right, target, length);
    }

    return index;

}

int rightIndex(int arr[], int left, int right, int target, int length){
    int index = -1;
    int mid = (left + right)/2;
    if(arr[mid] == target){
        while((arr[mid + 1] == target && mid < length -1)){
            mid++;
        }
        index = mid;
        // return index;
    }else if(arr[mid] > target && (mid > 0)){
        index = rightIndex(arr, left, mid - 1, target, length);
    }else if(arr[mid] < target && (mid < length - 1)){
        index = rightIndex(arr, mid + 1, right, target, length);
    }

    return index;
}

int main(){

    int number, target;
    cout <<"Enter the number of array: "<< endl;
    cin >> number;
    cout << endl;

    int arr[number];
    cout <<"Enter the value to the array: "<< endl;
    for(int i = 0; i < number; i++){
        cin >> arr[i];
    }
    cout << endl;
    cout <<"Enter the target value: "<< endl;
    cin >> target;
    cout << endl;
    int x, y; 

    x = leftIndex(arr, 0, number-1, target,number);
    y = rightIndex(arr, 0, number-1, target, number);
    cout << "\n["<< x  << ","<<y<< "]"<<endl;
    // cout << y << endl;

    return 0;
}