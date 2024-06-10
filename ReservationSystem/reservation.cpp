#include "reservation.h"
#include <iostream>

using namespace std;
namespace reservation {
    Seats::Seats() {
        // Initialize all seats available (all false)
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLUMNS; j++) {
                seating[i][j] = false;
            }
        }
    }

    // Function to print the seating chart
    // 1 Means Occupied 0 Means empty
    void Seats::print() {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLUMNS; j++) {
                cout << seating[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    // Function to check if seat is available or not, 
    // false means empty, true means occupied
    bool Seats::check_availability(int row, int col) {
        return seating[row][col];
    }

    // Function to reserve a seat
    void Seats::reserve(int row, int col) {
        if (!check_availability(row, col)) {
            seating[row][col] = true;
            cout << "\nReservation Confirmed. Seating Chart attached.\n";
        }
        else {
            cout << "\nSeat is already reserved.\n";
        }
    }

    // Function to cancel a seat
    void Seats::cancel(int row, int col) {
        //If seat is occupied, change to false
        if (check_availability(row, col) == true) {
            seating[row][col] = false;
            cout << "\nSeat has been cancelled, updated seating chart below\n";
        }
        //If seat is unoccupied, let user know
        else if (check_availability(row,col) == false){
            cout << "\nSeat has not yet been reserved.\nSeating chart remains the same.\n\n";
        }
        //print();
    }

    // Function for user to input row / col, 
    void Seats::selection(int& row, int& col)
    {
        do {
            cout << "\nEnter the row (0-9)\n";
            cin >> row;
            if (row < 0)
            {
                row *= -1;
            }
            if (row > ROWS -1)
            {
                cout << "\nPlease enter values within (0 - " << ROWS - 1 << ")";
            }

        } while (row > ROWS -1);

        do {
            cout << "\nEnter the column (0-9)\n";
            cin >> col;
            if (col < 0)
            {
                col *= -1;
            }
            if (col > COLUMNS - 1)
            {
                cout << "\nPlease enter values within (0 - " << COLUMNS - 1 << ")";
            }

        } while (col > COLUMNS - 1);

        //Fail safe if user enters negative numbers

    }
}