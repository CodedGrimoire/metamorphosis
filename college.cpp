int college()
{
    int choice,result=1;
    printf("%s\nWanna go For a walk in the park? or Do some coding homework?press 1 for park and 2 for h.w\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("You were idl walking by in the park when you spotted a whitest rabbit.It is very curious to see a healthy and beutiful creature in this somewhat dirty park.When you tried to have a good look at him the strong wind blows you and you fall into the hole the rabbit had just went in\n");
    }
    else
    {
    printf("Here are some problems to keep your miniature brain sharp:\n");
     // Puzzle 1: Convert to ASCII
    printf("%s\n", codep1);
    char answer1[1000];
    scanf("%s", answer1);
    while ((getchar()) != '\n');  // Clear input buffer
    if (strcmp(answer1, "Hello, Bug!") == 0) {
        result++;
    }

    // Puzzle 2: Decipher the meaning
    printf("%s\n", codep2);
    char answer2[1000];
    scanf("%s", answer2);
    while ((getchar()) != '\n');  // Clear input buffer
    if (strcmp(answer2, "AdvancedProgramming") == 0) {
        result++;
    }

    // Puzzle 3: Decrypt this
    printf("%s\n", codep3);
    char answer3[1000];
    fgets(answer3, sizeof(answer3), stdin);
    strtok(answer3, "\n");  // Remove newline character
    if (strcmp(answer3, "It's a good time to have a crossword puzzle, see and live with the mist.") == 0) {
        result++;
    }

    if(result<2)
    {
        printf("WOW that is embarrassing! you van blame you you are a bug\n");
        printf("Do you want to go to class now or wallow in your self pity?press 1 for class and 2 for skipping class");
        scanf("%d",&ch);
        
    }
    else{
        printf("Impressive.Now get ready to go to Class");
    }

    }

    
}