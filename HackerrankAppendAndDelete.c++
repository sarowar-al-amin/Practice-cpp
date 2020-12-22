// This program is the solution of the Hacker Rank 'Append and Delete' problem
// Try to teach my younger brother about 'string'

#include<bits/stdc++.h>
#include<string>
using namespace std;


// Declaring and defining function
void appendDelete(string str1, string str2, int move){
    int len1 = str1.size();
    int len2 = str2.size();
    int len = len1 + len2;

    bool truth = true;
    int count = 0;
    while (truth)
    {
        /* code */
        if(str1[count] == str2[count]){
            count++;
        }else{
            truth = false;
        }
    }
    // I found this quite difficult to develop the logic
    if(((len <= (2*count + move)) && (len%2 == move%2)) || (len < move)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
}

// Main function starts here
int main(){

    string str1, str2;
    int move;

    cout <<"Enter the first string: "<< endl;
    cin >> str1;
    cout <<"\nEnter the second string: " << endl;
    cin >> str2;
    cout <<"\nEnter the number of move: " << endl;
    cin >> move;

    appendDelete(str1, str2, move);
    cout << endl;

    return 0;
}