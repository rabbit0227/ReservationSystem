// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "reservation.h"
#include <iostream>

using namespace std;
using namespace reservation;


// Set up a class 
// Project needs to repeat until user enters a 0 {meaning combination of reservations / cancellations have to occur} 
// Project needs to have more failsafes
//          (Whether its out of bounds)
//          (whether they enter non numbers)
//          Whether they try to a cancel a seat that isn't reserved
//                --> Loops back to choose a different seat to cancel
//          Whether they try to reserve a seat that has been reserved
//                 --> Loops back to choose a different seat to reserve
// 
// https://docs.google.com/document/d/10w7uXe284EbO7k50Du3GogiayFZp85dKfQWtuVKVZ28/edit  < - REFER HERE TO NOTES


//int const ROWS = 10;
//int const COLUMNS = 10;
//
//bool seating[ROWS][COLUMNS] = {
//  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
//};

// 


//void print_seating(bool seating[10][10]) {
//    for (int i = 0; i < 10; i++) {
//        for (int j = 0; j < 10; j++) {
//            cout << seating[i][j] << " ";
//        }
//        cout << "\n";
//    }
//}
//void check_availability(bool seating[10][10], int row, int col) {
//    if (seating[row][col] == true) {
//        cout << "seating is already reserved\n";
//    }
//}
//void change_seating(bool seating[10][10], int row, int col, int classification) {
//    assert(classification == 1 || classification == 2);
//    if (classification == 1) {
//        check_availability(seating, row, col);
//        seating[row][col] = true;
//    }
//    if (classification == 2) {
//        seating[row][col] = false;
//    }
//    print_seating(seating);
//}

int main()
{
    //instance for the seats class

    seats reservationSeats;
    int input;
    
    do
    {
        cout << "enter your input classification:\n"
            << "0 -> exit\n"
            << "1 -> reservation\n"
            << "2 -> cancellation\n"
            << "3 -> view seating\n";
        cin >> input;

        if (input == 0)
        {
            return 0;

        }

        if (input == 1) {
            int row, col;
            cout << "enter the row(0-9) of the seat you want to preserve\n";
            cin >> col;
            cout << "enter the column(0-9) of the seat you want to preserve \n";
            cin >> row;
            reservationSeats.change_seating(reservationSeats.seating, row, col, 1);
        }
        if (input == 2) {
            int row, col;
            cout << "enter the row(0-9) of the seat you want to preserve\n";
            cin >> col;
            cout << "enter the column(0-9) of the seat you want to preserve \n";
            cin >> row;
            reservationSeats.change_seating(reservationSeats.seating, row, col, 2);
        }
        if (input == 3) reservationSeats.print_seating(reservationSeats.seating);

    } while (input > 3);

    return 0;
}
