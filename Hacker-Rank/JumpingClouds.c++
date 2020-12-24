#include<bits/stdc++.h>

using namespace std;

// Declaring and defining functions
int jumpingCloud(vector<int> cloud){
    int jump = 1; // since start is also considered
    int len = cloud.size();

    for(int i = 0; i < len; ){
        if(cloud[i + 2] != 1){
            i += 2;
        }else
        {
            i++;
        }
        jump++;
    }

    return jump;
}

// Main function starts here
int main(){
    int number;
    cout <<"Enter the number of clouds in the path: "<< endl;
    cin >> number;
    vector<int> cloud;
    // For first cloud
    // cloud.push_back(0);
    cout <<"\nEnter the cloud value to determine either it's cumulous(0) or thunderhead(1): "<< endl;
    for(int i = 1; i < number - 1; ){
        int x;
        cin >> x;
        if(x < 2){
           cloud.push_back(x);
           i++;
        }
    }
    // for last cloud
    // cloud.push_back(0);

    cout << "\nMinimum number of jump to win the game is : "<< jumpingCloud(cloud) <<" ."<<endl;

    return 0;
}