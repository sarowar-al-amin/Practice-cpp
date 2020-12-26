#include<bits/stdc++.h>

using namespace  std;

// Declaring and defining functions
int taumAndBday(int w, int wc, int b, int bc, int z){

    int low;
    int option1 = w*wc + b*bc; // cost for the combination of both white and black gifts
    int option2 = wc*(b + w) + b*z; // cost for all white gifts
    int option3 = bc*(b + w) + w*z; // cost for all black gifts

    low = min(option1, option2);
    low = min(low, option3);

    return low;
}

// main function starts here
int main(){
    int b, w, bc, wc, z;

    cout << "Enter the number of white gift: "<< endl;
    cin >> w;
    cout <<"\nPer unit cost of white gift: " << endl;
    cin >> wc;
    cout <<"\nEnter the number of black gift: "<< endl;
    cin >> b;
    cout <<"\nPer unit cost of black gift: " << endl;
    cin >> bc;

    cout <<"\nPer unit cost of conversion: " << endl;
    cin >> z;

    int lowsetCost = taumAndBday(w, wc, b, bc, z);

    cout <<"\nThe lowest cost is: " << lowsetCost <<" units." << endl;

    return 0;
}