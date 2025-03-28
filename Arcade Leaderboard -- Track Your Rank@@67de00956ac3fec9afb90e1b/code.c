#include <stdio.h>

void denseRanking(int leaderboard[], int n, int scores[], int m) {
    int ranks[n], distinctCount = 0;

    // Create a distinct ranking array
    ranks[0] = leaderboard[0];
    distinctCount = 1;
    
    for (int i = 1; i < n; i++) {
        if (leaderboard[i] != leaderboard[i - 1]) {
            ranks[distinctCount] = leaderboard[i];
            distinctCount++;
        }
    }

    int rankPosition = distinctCount;  // Start from lowest rank
    
    for (int i = 0; i < m; i++) {
        // Move up the leaderboard if the score is higher
        while (rankPosition > 0 && scores[i] >= ranks[rankPosition - 1]) {
            rankPosition--;
        }
        printf("%d\n", rankPosition + 1); // Print 1-based rank
    }
}

int main() {
    int n, m;

    // Read leaderboard size
    scanf("%d", &n);
    int leaderboard[n];

    // Read leaderboard scores
    for (int i = 0; i < n; i++) {
        scanf("%d", &leaderboard[i]);
    }

    // Read number of games
    scanf("%d", &m);
    int scores[m];

    // Read game scores
    for (int i = 0; i < m; i++) {
        scanf("%d", &scores[i]);
    }

    // Compute and print ranks
    denseRanking(leaderboard, n, scores, m);

    return 0;
}