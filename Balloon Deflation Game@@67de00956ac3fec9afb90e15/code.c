#include <stdio.h>

void balloonDeflationGame(int balloons[], int n) {
    // Keep playing until all balloons are flat (air = 0)
    while (1) {
        int minAir = 1000; // Set an arbitrarily large value for min air.
        int countNonFlat = 0;

        // Find the smallest non-zero amount of air
        for (int i = 0; i < n; i++) {
            if (balloons[i] > 0) {
                countNonFlat++;
                if (balloons[i] < minAir) {
                    minAir = balloons[i];
                }
            }
        }

        // If no balloons have air left, exit the loop
        if (countNonFlat == 0) {
            break;
        }

        // Print how many balloons still have air at the start of this round
        printf("%d\n", countNonFlat);

        // Subtract the minimum air amount from all balloons with air
        for (int i = 0; i < n; i++) {
            if (balloons[i] > 0) {
                balloons[i] -= minAir;
            }
        }
    }
}

// int main() {
//     // Example input
//     int balloons[] = {10, 5, 8, 3, 7};
//     int n = sizeof(balloons) / sizeof(balloons[0]);

//     // Run the balloon deflation game
//     balloonDeflationGame(balloons, n);

//     return 0;
// }
