#include <iostream>
#include <vector>
#include <cassert>
#include "reservation.h"

using namespace std;
using namespace reservation;

int main() {
    // Sets up a dynamic array of theater seats
    Seats* seating = new Seats();

    int input;
    // Do while loop that will repeat until user enters a 0
    do {
        cout << "Choose one option below\n"
            << "0 -> Exit system\n"
            << "1 -> Reserve a seat\n"
            << "2 -> Cancel a Seat\n"
            << "3 -> View seating chart\n"
            << "Selection: ";
        cin >> input;

        // If-statements based on user inputs
        if (input == 0) return 0;

        // Reserve Seating input
        if (input == 1) {
            int row, col;
            seating->selection(row, col);
            seating->reserve(row, col);
            seating->print();

        }
        else if (input == 2) {
            int row, col;
            seating->selection(row, col);
            seating->cancel(row, col);
            seating->print();


        }
        else if (input == 3) {
            cout << "\nCurrent seating Chart attached.\n";
            seating->print();

        }

        else {
            cout << "\nPlease select an option from 0 - 3\n";
        }

    } while (input != 0);

    delete seating;
    return 0;
}