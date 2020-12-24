#include<bits/stdc++.h>

using namespace std;

// Declaring and defining function
// cuttingStricks() find the length of the array after each itteration
void cuttingStricks(vector<int> strick){

    vector<int> length;
    int len = strick.size();
    sort(strick.begin(), strick.end());
    int counter = 0;
    int flag = strick[0];
    bool truth = true;

    while (truth)
    {
        /* code */
        length.push_back(len - counter);
        for(int i = counter; i < len; i++){
            strick[i] -= flag;
            if(strick[i] == 0){
                counter++;
            }
        }
        flag = strick[counter];
        if(counter == len){
            truth = false;
        }
    }
    
    cout << "\nNow print the length after each cutting: "<<endl;
    for(int i = 0; i < length.size(); i++){
        cout << length[i] << "  ";
    }
}

// Main function starts here
int main(){
    int numberOfStrick;
    vector<int> strick;

    cout <<"Enter the length of the strick: "<< endl;
    cin >> numberOfStrick;
    cout <<"\nEnter the length of each strick: "<< endl;
    for(int i = 0; i < numberOfStrick; ){
        int x;
        cin >> x;
        if( x > 0){
            i++;
            strick.push_back(x);
        }
    }

    cuttingStricks(strick);
    cout << endl;

    return 0;
}