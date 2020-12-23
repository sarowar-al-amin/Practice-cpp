// This program is the solution of Hacker Rank library fine function
#include<bits/stdc++.h>

using namespace std;

// Declaring and defining functions
// libraryFine() will return the amount of fine.
int libraryFine(int day1, int month1, int year1, int day2, int month2, int year2){
    int fine = 0;
    if(year1 > year2){
        fine = 10000;
    }else if ((year1 == year2) && (month1 > month2))
    {
        /* code */
        fine = 500*(month1 - month2);
    }else if ((year1 == year2) && (month1 == month2) && (day1 > day2))
    {
        /* code */
        fine = 15*(day1 - day2);
    }   

    return fine;
}

// Main function starts here
int main(){
    int d1, m1, y1, d2, m2, y2;

    cout <<"Enter the returning date, month and year: " << endl;
    cin >> d1 >> m1 >> y1;
    cout << endl;
    cout <<"Enter the day in which this book has to return:(date, month, year) "<< endl;
    cin >> d2 >> m2 >> y2;

    int amountOfFine = libraryFine(d1, m1, y1, d2, m2, y2);

    cout << "\nThe amount of fine has to pay is: " << amountOfFine <<" Hackos." << endl;
    return 0;
}