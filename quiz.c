#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
    // QUIZ PROGRAM
    char questions[][100] = {
        "What is the largest planet in the solar system?",
        "What is the hottest planet?",
        "What planet has the most moons?",
        "Is the Earth flat or round?"
    };

    char options[][100] = {
        "A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
        "A. Venus\nB. Mercury\nC. Mars\nD. Jupiter",
        "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
        "A. Flat\nB. Round\nC. Both\nD. Neither"
    };

    char answerKey[] = {'A', 'A', 'D', 'B'};

    int questionsCount = sizeof(questions) / sizeof(questions[0]);
    char guess = '\0';
    int score = 0;

    printf("Welcome to the Planet Quiz!\n");
    for(int i = 0; i < questionsCount; i++){
        printf("\n%s\n", questions[i]);
        printf("%s\n", options[i]);
        printf("Enter your answer (A, B, C, or D): ");
        scanf(" %c", &guess); // Read a single character input
        guess = toupper(guess); // Convert to uppercase for case-insensitive comparison
        
        if(guess == answerKey[i]){
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer is: %c\n", answerKey[i]);
        }
    }

    printf("\nQuiz completed! Your score is: %d/%d\n", score, questionsCount);
    return 0;
}