/*
	Contains the functions that are used to execute the core game, such as:

*/
#include "root.h"

// THE CORE GAME ------------------------------------------------------------------------
// Resets the global gameboard (seen by the players).
void prep_board();

// Print out the global gameboard. TO-DO: OBFUSCATE P2'S BOARD.
void print_gameboard();

//// Echo gameboard into battleship.log.
//void fechof_gameboard(FILE* outfile, int turn);

// **************************************************************************************
// Ask P1 for coordinate [row][col].
void get_coordinate(int* row, int* col);

// Execute the coregame (turn based shooting).
void core_game(struct player* p1, struct player* p2,
	char P1_board[][10], char P2_board[][10], FILE* outfile);

// Execute P1's turn.
void turn_MANUAL(char player_board[][10], char ship_letters[], int players_hitcheck[][3], int* turn, FILE* outfile);

// Execute P2's turn (bot).
void turn_RANDOM(char player_board[][10], char ship_letters[], int players_hitcheck[][3], int* turn, FILE* outfile);
//***************************************************************************************

// Update the global gameboard.
void update_gameboard(char board[][10]);
void update_gameboard_P2(char board[][10]);