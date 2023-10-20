#include<stdio.h>

int main()
{
    int score = 0;
    char answer;

    printf("Welcome to the Quiz Game!\n");
    printf("Question 1: What is the capital of France?\n");
    printf("A. Paris\n B. London\n C. Madrid\nD. Berlin\n");
    scanf(" %c", &answer);
    if(answer == 'A' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect.\n");
    }

    printf("Question 2: What is the largest planet in our solar system?\n");
    printf("A. Mars\nB. Jupiter\nC. Venus\nD. Saturn\n");
    scanf(" %c", &answer);
    if(answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect.\n");
    }

    printf("Question 3: What is the smallest country in the world?\n");
    printf("A. Russia\nB. Monaco\nC. Vatican City\nD. Singapore\n");
    scanf(" %c", &answer);
    if(answer == 'C' || answer == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect.\n");
    }

    printf("Your score is %d out of 3.\n", score);

    return 0;
}
