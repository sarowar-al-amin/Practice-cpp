// This code is the solution of Hacker rank cloud jumping problem
// Here I try to give my younger brother some basic tips about programming 
// Basically he learns about while and for loop.

#include<bits/stdc++.h>

using namespace std;
// Global variable
int initialEnergy = 100;

// Declaring and defining function
// This remainEnery will return the value of our answer
int remainEnergy(int c[], int k, int n){
    
    bool termination = true;
    int i = 0;
    while (termination)
    {
        /* code */
        initialEnergy = initialEnergy - 1 - 2*c[i];
        i = (i + k) % n;
        if(i == 0){
            termination = false;
        }
    }

    // remainEnergy = initialEnergy;
    return initialEnergy;
}

// Main function starts here
int main(){
    int n, k;
    
    cout<<"Enter the length of the array: "<< endl;
    cin >> n;
    cout<<"\nEnter how many step cover by a single jump: "<<endl;
    cin >> k; 
    int c[n];

    // Let's take the cloud input array from user
    cout <<"\nEnter the cloud value:(input is either 0 or 1)" << endl;
    for(int i = 0; i < n; ){
        int x;
        cin >> x;
        if(x == 0 || x == 1){
            c[i] = x;
            i++;
        }
    }


    // //Write the logic inside the main funtion
    // bool terminator = true;
    // int i = 0;
    // while(terminator){
    //     initialEnergy = initialEnergy - 1 - 2*c[i];
    //     i = (i + k) % n;
    //     if(i == 0){
    //         terminator = false;
    //     }
    // }

    cout<<"\nRemain Energy: " << remainEnergy(c, k, n) << endl;

    return 0;
}