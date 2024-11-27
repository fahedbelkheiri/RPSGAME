#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void playGame() {
    char *choices[] = {"rock", "paper", "scissors"};
    char userChoice[10];
    char playAgain[5];
    int computerChoice;

    
    srand(time(0));

    do {
    
        printf("Enter 'rock', 'paper', or 'scissors' (or 'quit' to exit): ");
        scanf("%s", userChoice);

       
        if (strcmp(userChoice, "quit") == 0) {
            printf("Thanks for playing! Goodbye!\n");
            break;
        }

        
        if (strcmp(userChoice, "rock") != 0 &&
            strcmp(userChoice, "paper") != 0 &&
            strcmp(userChoice, "scissors") != 0) {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        
        computerChoice = rand() % 3;
        printf("Computer chose: %s\n", choices[computerChoice]);

        
        if (strcmp(userChoice, choices[computerChoice]) == 0) {
            printf("It's a tie!\n");
        } else if ((strcmp(userChoice, "rock") == 0 && strcmp(choices[computerChoice], "scissors") == 0) ||
                   (strcmp(userChoice, "scissors") == 0 && strcmp(choices[computerChoice], "paper") == 0) ||
                   (strcmp(userChoice, "paper") == 0 && strcmp(choices[computerChoice], "rock") == 0)) {
            printf("You win!\n");
        } else {
            printf("You lose!\n");
        }

        
        printf("Do you want to play again? (yes/no): ");
        scanf("%s", playAgain);

    } while (strcmp(playAgain, "yes") == 0);

    printf("Thanks for playing! Goodbye!\n");
}

int main() {
    playGame();
    return 0;
}
