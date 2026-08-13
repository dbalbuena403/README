/*
 * main.cpp
 *
 *  Created on: Aug 2, 2026
 *      Author: Daniel Balbuena
 */

/*
 * Project Two: Airgead Banking
 * Course: CS 210
 *
 * Description:
 * This program calculates investment growth with and without
 * additional monthly deposits using monthly compounded interest.
 */

#include <iostream>
#include "Investment.h"

using namespace std;

int main() {
    try {
        // Create an Investment object
        Investment investment;

        char choice = 'Y';

        // Allow the user to perform multiple calculations
        while (toupper(choice) == 'Y') {

            // Get investment information from the user
            investment.getUserInput();

            // Display the two investment reports
            investment.displayReportWithoutDeposits();
            investment.displayReportWithDeposits();

            // Ask if the user wants another calculation
            cout << endl;
            cout << "Would you like to perform another calculation? (Y/N): ";
            cin >> choice;

            cout << endl;
        }

        cout << "Thank you for using the Airgead Banking Investment Calculator!" << endl;
    }
    catch (const exception& e) {
        cout << "An error has occurred: " << e.what() << endl;
    }

    return 0;
}
