// Annie Zhao
// October 7, 2024
// Lecture 5

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    // Variables
    char transaction; // Type of transaction
    double total;  // Money in the bank account
    double transfAmtD = 0;  // Transfer amount (debit)
    double transfAmtC = 0; // Transfer amount (credit)
    double totalD; // Total Debit amount
    double totalC; // Total Credit amount
    char again; // Loop for another transaction

    // Get original amount of money in account
    cout << "How much money did you have at the start of the day? : ";
    cin >> total;

    // Start loop
    cout << "Would you like to make a transaction? y/n : ";
    cin >> again;
    
    // Loop 
    while (again == 'y' || again == 'Y') {
        cout << "What is the type of transaction? debit or credit? d/c : ";
        cin >> transaction;

        // If it is debit or credit
        if (transaction == 'd' || transaction == 'D') {
            cout << "How much is the transaction? : ";
            cin >> transfAmtD; 
            total = (total - transfAmtD);
            totalD = (totalD + transfAmtD);
        }
        else if (transaction == 'c' || 'C') {
            cout << "How much is the transaction? : ";
            cin >> transfAmtC;
            total = (total + transfAmtC);
            totalC = (totalC + transfAmtC);
        }

    // Print the total after the transaction
    cout << fixed << setprecision(2);
    cout << "The total in your account now is : $" << total << endl;

    //Ask if user would like to input another transaction
    cout << "Do you have any other transactions to make? y/n : ";
    cin >> again;
    }
    // Ending Message
    cout << "Have a great day!" << endl;
    cout << "The total in your account at the end of the day is : $" << total << endl;
    cout << "The total debit amount is: $" << transfAmtD << endl;
    cout << "The total credit amount is: $" << transfAmtC << endl;

    return 0;
}

// Output Message
/*
How much money did you have at the start of the day? : 700
Would you like to make a transaction? y/n : y
What is the type of transaction? debit or credit? d/c : d
How much is the transaction? : 777
The total in your account now is : $-77.00
Do you have any other transactions to make? y/n : y
What is the type of transaction? debit or credit? d/c : c
How much is the transaction? : 345
The total in your account now is : $268.00
Do you have any other transactions to make? y/n : n
Have a great day!
The total in your account at the end of the day is : $268.00
The total debit amount is: $777.00
The total credit amount is: $345.00
*/