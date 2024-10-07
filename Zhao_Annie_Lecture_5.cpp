// Annie Zhao
// October 7, 2024
// Lecture 5

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {

    // Variables
    string transaction; // Type of transaction
    double total;  // Money in the bank account
    double transfAmt;  // Transfer amount
    char again; // Loop for another transaction

    // Start loop
    cout << "Would you like to make a transaction? y/n : ";
    cin >> again;

    // Loop
    if (again = 'y' || 'Y') {
        // Ask for input
        cout << "How much money did you have at the start of the day? : ";
        cin >> total;
        cout << "What is the type of transaction? debit or credit? : ";
        cin >> transaction;
        cout << "How much is the transaction? : ";
        cin >> transfAmt;

        // IF it is debit or credit
        if (transaction == "debit" || "Debit")
            total = (total - transfAmt);
        else if (transaction == "credit" || "Credit")
            total = (total + transfAmt);

        // Print the total after the transaction
        cout << fixed << setprecision(2);
        cout << "The total in your account now is : $" << total << endl;

        //Ask if user would like to input another transaction
        cout << "Do you have any other transactions to make? y/n : ";
        cin >> again;
    }

    else if (again = 'n' || 'N')
        cout << "Have a great day!";

    return 0;
}