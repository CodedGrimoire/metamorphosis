#include "global.h"

#include <stdio.h>
#include <string.h>
#include "trial.h"

int begining()
{
    int flag;
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
            flag=1;
        }
        else{
            printf("%s",barbie);
            flag=2;
        }
}
    else
    printf("Just die you incel");

   return flag;
}

int main()
{
    int flag=1,cho,gu;
    while(flag){
    gu=begining();
    game(gu);
    printf("Do you want to play another story?press 1 for yes and 2 for no\n");
    scanf("%d",&cho);
    if(cho==1)
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
    }
    return 0;
}
