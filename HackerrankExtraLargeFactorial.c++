#include<bits/stdc++.h>

using namespace std;



// void extraLongFactorials(int n){
//     int ones = 0, carry = 0, mul = 0;
//     vector<int> v(1);

//     v[0] = 1;
//     v[1] = 1;
//     for(int i = 2; i <= n; i++){
//         for(int j = 0; j < v.size(); j++){
//             mul = (v[j]*i) + carry;
//             ones = mul%10;
//             carry = mul/10;
//             v[j] = ones;
//             if(carry != 0){
//                 v.push_back(0);
//             }
//         }
//     }

//     reverse(v.begin(), v.end());// Reverse the vector

//     // Now removing zero from the starting
//     int i = 0;
//     for( ; i < v.size(); i++){
//         if(v[i] == 0){
//             continue;
//         }else{
//             break;
//         }
//     }

//     // Now printing the remain value
//     for( ; i < v.size(); i++){
//         cout << v[i];
//     }
//     cout << v.size()<< endl;

// }

// // Main function starts here
// int main(){
//     int n;
//     cout << "Enter the value: "<< endl;
//     // cin >> n;
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');
//     extraLongFactorials(n);
//     cout << endl;
//     return 0;
// }

int main(){

    int n,val[500],sz;
    cin >> n;
    val[0] = 1;
    sz = 1;
    for(int i = 2; i <= n; i++){

        int cary = 0;
        for(int j = 0; j < sz; j++){
            int pod = val[j]*i+cary;
            val[j] = pod%10;
            cary = pod/10;
        }
        while(cary){
            val[sz] = cary%10;
            cary/=10;
            sz++;
        }
    }
    for(int i = sz-1; i>= 0; i--)cout << val[i];
    cout << endl;
    return 0;
}