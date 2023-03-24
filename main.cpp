//  Filename:   programmingSprint1.cpp
//  Summary:    Program 1 of Programming Sprint
//  Author:     rizal
//  Date:       16 March 2023
#include <iostream>
#include <iomanip>
using  namespace std;

void displayOwed (double);
    // displays amount owed by the king from day 1 to day 64

int main() {
    
    // Program 1
    double amtOwed = 0.01;
    
    displayOwed (amtOwed);
    
    return 0;
}

void displayOwed (double amtOwed) {
    cout << "Day\tAmount Owed--\n"
         << "---\t-----------\n";
    cout << fixed << setprecision(2);
    
    for (int i = 1; i <= 64; i++) {
        if (i > 1) {
            amtOwed = amtOwed * 2;
        }
        cout << i << "\t" << amtOwed << "\n";
    }
    
    return;
}


