#include <stdio.h>

char back[1000] = "As your consciousness slowly awakens, you become aware of an otherworldly transformation. The boundaries between dream and reality blur as you find yourself trapped in an unfamiliar form. In the quiet solitude of the room, a surreal reality unfolds. You gaze upon your new physique, a creature with numerous legs, delicate and grotesque. Panic and confusion set in as you try to comprehend this metamorphosis. The air feels different, and the surroundings, once familiar, now appear distorted. You, the player, are now a participant in this strange and unsettling tale, navigating a world that defies reason and challenges your very existence.";

char option1[1000] = "You really have one way to end it all: starve yourself. Your guide will be heavily disappointed, but who cares, right?";

char option2[1000] = "As a bug-college-student, you no longer perceive interconnectedness but an irreparable disconnection between your two worlds. Human interactions are a distant echo, drowned out by the cacophony of silent screams within your own mind.\n\nThe mysterious metamorphosis brought not enlightenment but a never-ending nightmare. Forces that lurked in the shadows, both human and insect, sought not to unravel secrets but to exploit vulnerabilities. The University, once a beacon of hope, became a breeding ground for cruelty. Secret societies and enigmatic figures weren't sources of intrigue but instruments of torment, blurring the lines between self and tormentor.\n\nIn the desolate corners of the library and the hidden chambers of Metropolis, your journey continued—a descent into a darkness that consumed both human aspirations and insect instincts. The insect realm didn't beckon; it swallowed you whole, revealing not prophecies but an abyss of hopelessness.";

char option2c[1000] = "In the cold glow of a computer screen, your metamorphosis as a bug-college-student took on a distinctly binary nature—alternating between the zeros of despair and the ones of fleeting hope. As a computer science student entangled in the web of your own existence, the challenges multiplied, echoing the complexities of the code you studied.";

char guide[1000] = "Your humble guide is very busy, but she sent you a letter that if you go on a quest to find the Holy Grail, she will send you to a place where you can finally be happy.";

char win[1000] = "Indeed, this is surprising. Brace yourself as we journey into a realm where the very fabric of reality is woven by the intricate dance of insects, a surprising tapestry where bugs hold dominion.";

char lose[1000] = "Your foolish requests fall on deaf ears. I have no inclination to aid or indulge in such trivial endeavors. The whims of insects and alternate realms matter not to me; my focus lies elsewhere. Do not test my patience further.";

int main()
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
        }
        else
        {
            printf("Do you wanna call your guide for help?\n");
            scanf("%s",sc);

            if (sc[0] == 'y')
            {
                printf("%s\nWanna go?\n", guide);
                scanf("%s", ch);

                if (ch[0] == 'y')
                {
                    // win = conquestforholygrail();
                    result = 10;

                    if (result > 5)
                    {
                        printf("ScarletWitch: %s\n", win);
                    }
                    else
                    {
                        printf("ScarletWitch: %s\n", lose);
                    }
                }
            }
        }
    }

    return 0;
}
