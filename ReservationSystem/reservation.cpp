#include "reservation.h"
#include <iostream>
#include <vector> 
#include <cassert>

using namespace std;
namespace reservation
{
    seats::seats() {
        //initialize all seats available (all 0)
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLUMNS; j++) {
                seating[i][j] = 0;
            }
        }
    }

    //void seats::reserveSeat(int row, int column) {

    //}

    //// Input for row & seat number
    //// Output - if seat is taken, it is cancelled and switched to false
    //void seats::cancelSeat(int row, int column) {

    //}

    //// Prints seats as 0's and 1's 
    //// 0's mean seat is available
    //// 1's mean seat is taken
    //void seats::displaySeats() {

    //}

    void seats::print_seating(bool seating[10][10]) {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLUMNS; j++) {
                cout << seating[i][j] << " ";
            }
            cout << "\n";
        }
    }
    void seats::check_availability(bool seating[10][10], int row, int col) {
        if (seating[row][col] == true) {
            cout << "seating is already reserved\n";
        }
    }
    void seats::change_seating(bool seating[10][10], int row, int col, int classification) {
        assert(classification == 1 || classification == 2);
        if (classification == 1) {
            check_availability(seating, row, col);
            seating[row][col] = true;
        }
        if (classification == 2) {
            seating[row][col] = false;
        }
        print_seating(seating);
    }
}


