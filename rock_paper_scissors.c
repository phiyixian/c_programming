#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

const char* choices[3] = {"Rock", "Paper", "Scissors"};

int getComputerChoice() {
    return rand() % 3;
}

int getUserChoice() {
    int choice = -1;
    do{
        printf("\nChoose your move:\n");
        printf("0: Rock\n");
        printf("1: Paper\n");
        printf("2: Scissors\n");
        printf("Enter your choice (0, 1, or 2): ");
        scanf("%d", &choice);
    } while (choice < 0 || choice > 2);

    return choice;
}

void checkWinner(int userChoice, int computerChoice) {
    if(userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if((userChoice == 0 && computerChoice == 2) ||
              (userChoice == 1 && computerChoice == 0) ||
              (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    // Rock Paper Scissors Game
    srand(time(NULL));

    for(int i = 0; i < 3; i++){
        int computerChoice = getComputerChoice();
        int userChoice = getUserChoice();

        printf("You chose: %s\n", choices[userChoice]);
        printf("Computer chose: %s\n", choices[computerChoice]);

        checkWinner(userChoice, computerChoice);
    }

    return 0;
}