// Finding the second maximum value from an array of integer without using library and sorting
// Time complexity O(n) and Space complexity O(n)
// Using method: Two-pointer

#include<bits/stdc++.h>
#define max_length_of_array 100

using namespace std;


int main(){

    int arr[max_length_of_array];
    int size;

    cout << "Enter the number of array element:"<<endl;
    cin >> size;
    cout <<"\nEnter those elements: \n";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int maxValue, secondMax;
    int i = 0, j = size - 1;
    int k;

    if (arr[i] > arr[j]){
        maxValue = arr[i];
        secondMax = arr[j];
        k = j;
    }else
    {
        maxValue = arr[j];
        secondMax = arr[i];
        k = i;
    }

    while (i < j)
    {
        /* code */
        if(arr[k] > maxValue){
            secondMax = maxValue;
            maxValue = arr[k];
        }else if(arr[k] > secondMax){
            secondMax = arr[k];
        }
        // Another if to control loop
        if(k == i){
            i++;
            k = i;
        }else
        {
            
            j--;
            k = j;
        }
        
    }


    cout <<"\nSecond Maximum value of the array is : " << secondMax << endl;
    

    


    return 0;
}