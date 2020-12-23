// Try to teach my younger brother about the programming
// Here he learns about the sqrt() 
// This problem is taken from Hacker Rank 
#include<bits/stdc++.h>

using namespace std;

// Declaring and defining function

// sherlockAndSquare() print the total number of square integer between initial to termination point.
void sherlockAndSquare(int initial, int termination){
    int x = sqrt(initial);
    int y = sqrt(termination);
    cout <<"Number of square integer is : "<< endl;
    cout << y - x << endl;
}

// Main function starts here
int main(){

    int startPoint, endPoint;
    cout << "Enter the starting point :"<<endl;
    cin >> startPoint;
    cout <<"\nEnter the end point :"<< endl;
    cin >> endPoint;
    sherlockAndSquare(startPoint, endPoint);

    return 0;
}