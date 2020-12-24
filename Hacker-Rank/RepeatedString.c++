#include<bits/stdc++.h>
#include<string>

using namespace std;

// Declaring and defining functions
// return the value of the repeated 'a'
int repeatedString(string s, long long int n){
    long long int repeat = 0;
    int stringLen = s.size();
    // cout <<"\nString length: " <<stringLen <<endl;
    int counter = 0;
    for(int i = 0; i < stringLen; i++){
        if(s[i] == 'a'){
            counter++;
        }
    }

    repeat = (n/stringLen) * counter;
    // cout <<"\nRepeated: " << repeat << endl;
    int remain = n % stringLen;
    // cout<<"\nRemain: "<< remain << endl;
    for(int i = 0; i < remain; i++){
        if(s[i] == 'a'){
            repeat += 1;
        }
    }
    return repeat;   
}

// Main function starts here
int main(){

    string s;
    long long int number;

    cout <<"Enter the string: "<< endl;
    cin >> s;
    cout << "\nEnter the number: "<< endl;
    cin >> number;
    cout << endl;

    cout <<"Number of repeatation is: " << repeatedString(s, number) <<" ."<<endl;


    return 0;
}