

int giveUp()
{
    int result = 1, res,flag=0;
    char ans[30];
    char snas[30] = "nowhere";

    printf("%s\n", intro);
    printf("OWL: Welcome, Mortal! In this search for the holy grail, your humanity will be challenged along with your wit. Choose your answers wisely, and you will get to the holy grail... Let us begin... Answer the questions to proceed to the next level\n");

    // First Riddle
    printf("%s\n", first);
    scanf("%s", ans);
    while ((getchar()) != '\n'); // Clear input buffer
    if (ans[0] == 'y' || ans[0] == 'n') {
        result++;
    }

    // Second Riddle
    printf("%s\n", second);
    scanf("%s", ans);
    while ((getchar()) != '\n'); // Clear input buffer
    if (strcasecmp(ans, snas) == 0) {
        result++;
    }

    // Third Riddle
    printf("%s\n", third);
    scanf("%s", ans);
    while ((getchar()) != '\n'); // Clear input buffer
    if (strcasecmp(ans, "darkness") == 0) {
        result++;
    }

    // Fourth Riddle
    printf("%s\n", fourth);
    scanf("%s", ans);
    while ((getchar()) != '\n'); // Clear input buffer
    if (strcasecmp(ans, "letter m") == 0) {
        result++;
    }

    // Print the result
    printf("OWL: You have successfully solved %d out of 4 riddles.\n", result);
    if(result<2)
    {
        flag=0;
    }
    if (result>=2)
    {
        printf("You may proceed to Moral Crossroads\n");
        printf("%s\n", moral);
        printf("%s\ndo you forgive him or want to punish him?type 1 for forgiveness and 2 to punish him\n", ethical1);
        scanf("%d", &res);
        
        if (res == 2)
        {
            result++;
        }
        printf("%s\nif you choose to save the world by killing children type 1 and if you dont want to type 2\n", ethical2);
        scanf("%d", &res);
        if (res == 2)
        {
            result++;
        }
        printf("%s\nif you oppose the technology type 1 and if you dont type 2\n", ethical3);
        scanf("%d", &res);
        if (res == 1)
        {
            result++;
        }
    }
    if (result >= 5)
    {
        printf("MORALITH: You can now pass through the crossroad. Did not think an insect would have this much humanity, but this Universe tends to surprise us. You may now climb the mountain to get the treasure you seek\n");
        printf("%s\n",mount);
        printf("The Holy Grail is up there...Do you want to proceed?yes or no?\n");
        scanf("%s",ans);
        if(ans[0]=='y')
        {
            printf("%s\n",mountlose);
            flag=0;
        }
        else
        {
            printf("%s\n",mountwin);
            flag=1;
        }
    }
    else{
        flag=0;
        printf("MORALITH : Somtimes the insides are as ugly as the outside.you will roam this forest until the end of time or atleast until you find some humanity\n");
    }

    return flag;
}

void game(int gui)
{
    char sc[100], ch[100],asc[100];
    int sch, result;

    printf("Very...Very Early in the morning you open your eyes...\n");
    printf("%s", back);
    printf("\nYou have 3 Options 1. Kill yourself\n2. Live your life as an ugly bug who is also a college student (why even bother?)\n3. Live your life as a bug who is also working (seriously why do you have so much will to live at this point?)\n");
    scanf("%d", &sch);

    if (sch == 1)
    {
        printf("%s\n", option1);
    }
    else if (sch == 2)
    {
        printf("%s\n", option2);
        printf("Continue or give up?\n");
        scanf("%s", asc);

        if (asc[0] == 'c')
        {
            printf("%s\n", option2c);
            college();
        }
        else
        {
            printf("Do you wanna call your guide for help?\n");
            scanf("%s",sc);

            if (sc[0] == 'y')
            {
                if(gui==2)
                {
                    printf("Barbie is veryyy busy playing in her pink dollhouse and most likely forgot about you so No she cannot really help you\n");
                    printf("Wanna go to BarbieLand and ask for her help?\n");
                    scanf("%s", ch);
                    if(ch[0]=='y')
                    {
                        printf("%s\n",barbieland);
                        printf("%s\nwhich one killed the mermaid?suspect no:1,2,or 3?\n",suspects);
                        int wini;
                        scanf("%d",&wini);
                        if(wini==3)
                        {
                            printf("%s\n",barbiewin);
                        }
                        else
                        {
                            printf("Oh no You were wrong.You couldnt figure out who the murderer was and the real murderer was threatened by you and killed you before you could catch him/her\n");
                        }
                        
                    }

                }
                else{
                printf("%s\nWanna go?\n", guide);
                scanf("%s", ch);

                if (ch[0] == 'y')
                {
                    int wini = giveUp();
                    

                    if (wini!=0)
                    {
                        printf("ScarletWitch: %s\n", win);
                    }
                    if(wini==0)
                    {
                        printf("ScarletWitch: %s\n", lose);
                    }
                }
                }
            }
        }
    }

   // return 0;
}


