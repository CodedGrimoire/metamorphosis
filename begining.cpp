#include <stdio.h>
char scarletWitch[1000]="ScarletWitch : Welcome Mortal! I will be guiding you throughout your sad,pathetic journey";
char barbie[1000]="Barbie: Well, well, well. Looks like we've got ourselves a drama queen . Let's add some sparkle to this 'pathetic' journey! ";
int main()
{
    printf("MetaMorphosis\n");
    printf("Wanna begin....?\n");
    char q[100],dec[100],name[100];
    scanf(" %99s",q);

    
    if(q[0]=='y'){
        printf("Enter your name :\n");
        scanf("%s",name);
        printf("Hello %s\n",name);
        printf("Choose your Guide:Scarletwitch or Barbie?\n");
        scanf("%99s",dec);
        if(dec[0]=='s'){
            printf("%s",scarletWitch);
        }
        else{
            printf("%s",barbie);
        }
}
    else
    printf("Just die you incel");

    return 0;
}
