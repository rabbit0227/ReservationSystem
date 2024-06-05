// ReservationSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector> 
#include <cassert>
using namespace std;

bool seating[10][10] = {
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

void print_seating(bool seating[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << seating[i][j] << " ";
        }
        cout << "\n";
    }
}
void check_availability(bool seating[10][10], int row, int col){
    if(seating[row][col] == true){
        cout << "seating is already reserved\n";
    }
}
void change_seating(bool seating[10][10], int row, int col, int classification){
    assert(classification == 1 || classification == 2);
    if(classification == 1){
        check_availability(seating, row, col);
        seating[row][col] = true;
    }
    if(classification == 2){
    seating[row][col] = false;
    }
    print_seating(seating);
}

int main()
{
    int input;
    cout << "enter your input classification:\n"
         << "0 -> exit\n"
         << "1 -> reservation\n"
         << "2 -> cancellation\n"
         << "3 -> view seating\n";
    cin >> input;
    if(input == 0) return 0;
    if(input == 1){
        int row, col;
        cout << "enter the row(0-9) and column(0-9) of the seat you want to preserve\n";
        cin >> row >> col;
        change_seating(seating, row, col, 1);
    }
    if(input == 2){
        int row, col;
        cout << "enter the row(0-9) and column(0-9) of the seat you want to cancel a reservation for\n";
        cin >> row >> col;
        change_seating(seating, row, col, 2);
    }
    if(input == 3) print_seating(seating);
    
    return 0;
}
