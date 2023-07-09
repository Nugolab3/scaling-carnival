#include <stdio.h>

int main() {
    int score;
    printf("Enter score: ");
    if (scanf("%d", &score) != 1) {
        printf("Invalid input. Please enter a valid score.\n");
        return 1;
    }

    if (score < 0 || score > 100) {
        printf("Invalid score. Score should be between 0 and 100.\n");
    } else if (score >= 70) {
        printf("Grade: A\n");
    } else if (score >= 60) {
        printf("Grade: B\n");
    } else if (score >= 50) {
        printf("Grade: C\n");
    } else if (score >= 45) {
        printf("Grade: D\n");
    } else if (score >= 40) {
        printf("Grade: E\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
