#include <stdio.h>
#include <stdlib.h>

// Function to find the rank of each score
void trackPlayersRanks(int ranked[], int n, int players[], int m) {
    // Create an array to store the distinct scores in descending order
    int *distinct_scores = (int *)malloc(n * sizeof(int));
    int distinct_count = 0;

    // Remove duplicates from the leaderboard and store the distinct scores
    for (int i = 0; i < n; i++) {
        if (distinct_count == 0 || ranked[i] != distinct_scores[distinct_count - 1]) {
            distinct_scores[distinct_count++] = ranked[i];
        }
    }

    // Iterate over each score you achieve
    int j = distinct_count - 1; // Pointer for distinct_scores (start from the lowest score)
    for (int i = 0; i < m; i++) {
        // Move through the leaderboard to find the correct rank
        while (j >= 0 && players[i] >= players[j]) {
            j--;  // Move left when your score is higher or equal to a leaderboard score
        }
        // Rank is based on the index of the last score lower than your score
        printf("%d\n", j + 2);  // +1 for rank and another +1 because we are 1-based ranking
    }

    // Free the memory allocated for distinct_scores
    free(distinct_scores);
}

// int main() {
//     // Example input
//     int leaderboard[] = {100, 90, 90, 85, 80};  // Leaderboard scores
//     int scores[] = {70, 80, 105};  // Your scores

//     int leaderboard_size = sizeof(leaderboard) / sizeof(leaderboard[0]);
//     int scores_size = sizeof(scores) / sizeof(scores[0]);

//     // Call the function to find the rank after each game
//     findRank(leaderboard, leaderboard_size, scores, scores_size);

//     return 0;
// }
