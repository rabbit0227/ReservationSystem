#pragma once
// Headerfile

/*
*       // No inputs -> Outputs seating Chart
        void print();

        // Input row and seating number -> returns bool if seat is available or not
        bool check_availability(int row, int col);

        // Input Row and Column number -> reserves seat if available, does nothing if empty
        // Prints seating chart no matter what
        void reserve(int row, int col);

        void cancel(int row, int col);
        // Input row and Column Number
        // If seat is taken, it will cancel
        // If Seat is available, nothing is done
        // Prints out seating chart

        void selection(int& row, int& col);
        //Function to take in row / column number
        // Verifies if appropriate numbers are used

*/


#include <iostream>
#include <vector>
#include <cassert>

namespace reservation {
    const int ROWS = 10;
    const int COLUMNS = 10;

    class Seats {
    public:
        Seats();

        void print();
        bool check_availability(int row, int col);
        void reserve(int row, int col);
        void cancel(int row, int col);
        void selection(int& row, int& col);

    private:
        bool seating[ROWS][COLUMNS];
    };
}