#include <stdio.h>

char board[3][3]; // The game board

// Function to initialize the board
void initialize_board() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// Function to print the board
void print_board() {
    int i;
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", 
		board[i][0], board[i][1],
		 board[i][2]);
        if (i != 2) {
            printf("\n---|---|---\n");
        }
    }
    printf("\n");
}

// Function to check if the given
 //player has won
int check_win(char player) {
    int i;
    // Check rows
    for (i = 0; i < 3; i++) {
        if (board[i][0] == player &&
		 board[i][1] == player &&
		  board[i][2] == player) {
            return 1;
        }
    }
    // Check columns
    for (i = 0; i < 3; i++) {
        if (board[0][i] == player && 
		board[1][i] == player &&
		 board[2][i] == player) {
            return 1;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && 
	board[1][1] == player &&
	 board[2][2] == player) ||
        (board[0][2] == player &&
		 board[1][1] == player &&
		  board[2][0] == player)) {
        return 1;
    }
    return 0;
}

// Function to make a move for the given player
void make_move(char player) {
    int row, col;
    printf("Player %c's turn.\n", player);
    printf("Enter row (0-2): ");
    scanf("%d", &row);
    printf("Enter column (0-2): ");
    scanf("%d", &col);
    if (row < 0 || row > 2 || col < 0 || col > 2 ||
	 board[row][col] != ' ') {
        printf("Invalid move. Try again.\n");
        make_move(player);
    } else {
        board[row][col] = player;
    }
}

// Function to check if the board is full
int is_board_full() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    char player = 'X'; // Player 'X' starts
	 //the game
    int game_end = 0;
    
    printf("Tic-Tac-Toe Game\n");
    printf("Player 1: X\n");
    printf("Player 2: O\n");
    
    initialize_board();
    print_board();
    
    while (!game_end) {
        make_move(player);
        print_board();
        
        if (check_win(player)) {
            printf("Player %c wins!\n", player);
            game_end = 1;
        } else if (is_board_full()) {
            printf("It's a draw!\n");
            game_end = 1;
        }
        
        // Switch players
        if (player == 'X') {
            player = 'O';
        } else {
            player = 'X';
        }
    }
    
    return 0;
}






