#pragma once

#include <iostream>
#include <vector> 
#include <cassert>

using namespace std;
namespace reservation
{
	int const ROWS = 10;
	int const COLUMNS = 10;

	class seats
	{
	public:
		// default constructor
		seats();

		//seats(int ROWS , int COLUMNS);

		//// Modifican Member Functions
		//// Input for row & seat number
		//// If Seat is available, it is taken and switched to true
		//void reserveSeat(int row, int column);

		//// Input for row & seat number
		//// Output - if seat is taken, it is cancelled and switched to false
		//void cancelSeat(int row, int column);

		//// Prints seats as 0's and 1's 
		//// 0's mean seat is available
		//// 1's mean seat is taken
		//void displaySeats();

		void print_seating(bool seating[10][10]);

		void check_availability(bool seating[10][10], int row, int col);

		void change_seating(bool seating[10][10], int row, int col, int classification);

		bool seating[ROWS][COLUMNS];




	private:
		//bool reserve;
		// int seatsAvailable;
		

	};

}