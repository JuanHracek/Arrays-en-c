#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <size> <percentage>\n", argv[0]);
        return 1;
    }

    srand(time(NULL));
    int n = atoi(argv[1]);
    int p = atoi(argv[2]);

    if (n <= 0 || p < 0 || p > 100) {
        fprintf(stderr, "Invalid input values.\n");
        return 1;
    }

    int tablero[n + 2][n + 2];

    // Initialize border cells
    for (int i = 0; i < n + 2; i++) {
        tablero[0][i] = 9;
        tablero[i][0] = 9;
        tablero[n + 1][i] = 9;
        tablero[i][n + 1] = 9;
    }

    // Randomly place mines and initialize empty cells
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            tablero[i][j] = (rand() % 101 < p) ? -1 : 0;
        }
    }

    // Calculate number of adjacent mines
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            if (tablero[i][j] != -1) {
                int count = 0;
                count += tablero[i - 1][j] < 0 ? 1 : 0;
                count += tablero[i - 1][j + 1] < 0 ? 1 : 0;
                count += tablero[i][j + 1] < 0 ? 1 : 0;
                count += tablero[i + 1][j + 1] < 0 ? 1 : 0;
                count += tablero[i + 1][j] < 0 ? 1 : 0;
                count += tablero[i][j - 1] < 0 ? 1 : 0;
                count += tablero[i - 1][j - 1] < 0 ? 1 : 0;
                tablero[i][j] = count;
            }
        }
    }

    // Print the board
    for (int i = 0; i < n + 2; i++) {
        for (int j = 0; j < n + 2; j++) {
            if (tablero[i][j] < 0) {
                printf("* ");
            } else {
                printf("%d ", tablero[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
