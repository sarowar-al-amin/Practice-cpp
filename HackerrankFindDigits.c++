// This program is the solution of Hacker Rank Find Digits problem
// I try to teach my younger brother about programming
// In this problem each digit consider as unique
#include<bits/stdc++.h>

using namespace std;

// Declaring and defining function
int findDigit(int number){
    int ans = 0;
    int number1 = number;
    while (number1 != 0)
    {
        /* code */
        int x = number1 % 10;
        if( x > 0){
            if(number % x == 0){
                ans++;
                // cout << x << " ";
            }
        }

        number1 = number1/10;
    }   
    return ans;
}

// Main function starts here
int main(){

    int digit;
    cout <<"Enter the digit: "<< endl;
    cin >> digit;

    cout <<"\nAnswer: " << findDigit(digit) << endl;

    return 0;
}