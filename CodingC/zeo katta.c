#include <stdio.h>

// Function to display the game board
void displayBoard(char board[3][3]) {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

// Function to check if the move is valid
int isValidMove(char board[3][3], int row, int col) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3) {
        return 0; // Invalid move if out of bounds
    }
    if (board[row][col] != ' ') {
        return 0; // Invalid move if cell is already occupied
    }
    return 1;
}

// Function to check if the game is over (win or draw)
int isGameOver(char board[3][3]) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return 1; // Win
        }
    }
    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            return 1; // Win
        }
    }
    // Check diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return 1; // Win
    }
    // Check for draw
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0; // Game not over yet
            }
        }
    }
    return -1; // Draw
}

int main() {
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    int row, col;
    int currentPlayer = 1; // Player 1: 'X', Player 2: 'O'

    printf("Tic Tac Toe Game\n");
    printf("Player 1: X, Player 2: O\n");

    while (1) {
        displayBoard(board);
        printf("Player %d's turn (row col): ", currentPlayer);
        scanf("%d %d", &row, &col);

        if (isValidMove(board, row, col)) {
            board[row][col] = (currentPlayer == 1) ? 'X' : 'O';
            int gameState = isGameOver(board);
            if (gameState == 1) {
                displayBoard(board);
                printf("Player %d wins!\n", currentPlayer);
                break;
            } else if (gameState == -1) {
                displayBoard(board);
                printf("It's a draw!\n");
                break;
            }
            currentPlayer = (currentPlayer == 1) ? 2 : 1;
        } else {
            printf("Invalid move. Try again.\n");
        }
    }

    return 0;
}