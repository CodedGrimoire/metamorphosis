#include <stdio.h>
#include <string.h>

void respondToUserInput(char *userInput) {
    // Simple pattern matching for user input
    if (strstr(userInput, "hello")) {
        printf("NPC: Hello! How can I help you?\n");
    } else if (strstr(userInput, "how are you")) {
        printf("NPC: I'm just a program, but thanks for asking!\n");
    } else if (strstr(userInput, "bye")) {
        printf("NPC: Goodbye! Have a great day.\n");
    } else {
        printf("NPC: I'm sorry, I didn't understand that.\n");
    }
}

int main() {
    char userInput[256];
    char exit[20]="exit";
    int flag=1;

   

    // Respond to user input
    while(flag){
     printf("You: ");
    fgets(userInput, sizeof(userInput), stdin);

    // Remove newline character from user input
    userInput[strcspn(userInput, "\n")] = 0;
    if(strcmp(userInput,exit)==0)
    {
        flag=0;
    }
    else{
    respondToUserInput(userInput);
    }
    }

    return 0;
}
