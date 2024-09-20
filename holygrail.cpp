#include <stdio.h>
#include <string.h>

char first[1000] = "In a town, there is a barber who shaves all men who do not shave themselves and only those men. The question is, does the barber shave himself? If he does, then he shouldn't, but if he doesn't, then he should. What is the answer?";
char second[1000] = "A plane crashes on the border of the United States and Canada. Where do they bury the survivors? ";
char third[1000] = "The more you look at it, the less you see. What is it?";
char fourth[1000] = "What comes once in a minute, twice in a moment, but never in a thousand years?";
char intro[1000] = "Embarking on an expedition through the mystical Riddlewood Forest, you find yourself at the mercy of whimsical puzzles that guard its ancient secrets. The towering trees seem to whisper riddles, challenging any who dare to traverse their wooded domain. To journey through this captivating forest, one must unlock the answers hidden within the enigmatic puzzles that dance amid the foliage. Each correct response unravels the path forward, unveiling the mysteries that lie beneath the canopy of the Riddlewood Forest.";
char moral[1000] = "As you step into the mystical realm of Moral Crossroads, the ethereal presence of the Moraliths envelops you. These wise and enigmatic beings, guardians of ethical balance, greet you with an otherworldly resonance. Their voices echo through the air, foretelling of the trials ahead. 'Seeker of the Holy Grail, prepare thyself for the dilemmas that shall shape your destiny. In the heart of Moral Crossroads, your choices shall carve the path to salvation or tribulation. Choose wisely, for the very fabric of your morality hangs in the balance.'";
char ethical1[1000] = "you decide the fate of one stained by grave deeds. Mercy may breed redemption, but danger lingers. Opting for justice eliminates immediate threats, yet vengeance whispers in its wake. The balance between forgiveness and accountability teeters on a precipice. Your choice echoes through realms, shaping destinies, a weighty decision in the haunting corridors of morality.";
char ethical2[1000] = "Amidst the looming threat of the world's demise, you find yourself facing a harrowing ethical dilemma. A group has discovered a potential solution to avert the impending catastrophe, but it involves sacrificing a small, innocent child to activate the mechanism. On one hand, the sacrifice could save countless lives and preserve the world. On the other hand, the moral weight of intentionally causing harm to an innocent child is a heavy burden. As the seconds tick away, you must grapple with the profound ethical quandary of choosing between the greater good and the intrinsic value of an individual life.";
char ethical3[1000] = "In the heart of a technological breakthrough, you confront an ethical crossroads. A brilliant scientist has developed a groundbreaking artificial intelligence system that could revolutionize medicine, eradicate poverty, and solve pressing global issues. However, the catch is that the system requires constant access to personal data from every individual on the planet. The dilemma unfolds as you weigh the potential for immense societal progress against the invasion of privacy and the potential misuse of sensitive information. The question becomes whether the pursuit of collective welfare justifies sacrificing individual privacy and autonomy.";
char mount[1000]="As you ascend the Mount of Sisyphus, a daunting task awaits. A massive boulder rests at the base, and your mission is to roll it to the mountain's peak. With each arduous push, the boulder inches closer to the summit. Yet, just as success seems within reach, an unseen force sends it tumbling back down. The cycle repeats—a relentless struggle against futility. The challenge tests not just your physical strength but your resolve to persist in the face of a seemingly endless task, echoing the existential journey of Sisyphus himself.";
char mountwin[1000]="You are smarter than you look really...You chose not to participate in a unneccesary task.It is  okay to give up.But to your surprise the Holy Grail appears it seems that the Gods have mercy on you";
char mountlose[1000]="You just got played by Sisyphus. He has once again defied the Gods. Now you're stuck pushing a boulder up a mountain for eternity. But Hey! better than being a college student right?";
int main()
{
    int result = 1, res;
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
    if (result > 2)
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
        }
        else
        {
            printf("%s\n",mountwin);
        }
    }
    else{
        printf("MORALITH : Somtimes the insides are as ugly as the outside.you will roam this forest until the end of time or atleast until you find some humanity\n");
    }

    return 0;
}
