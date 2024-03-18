// Write a C program to accept batting information of a cricket team using structure. It contains the player name and runs scored by the  player. Calculate total runs scored by the cricket team.
#include<stdio.h>
int main(){
    typedef struct batting{
        char *name;
        int run;

    }batting;

        int total_run=0;
    batting playe[100];
    for(int i=0;i<2;i++){
        printf("Player Name: ");
        scanf("%s",&playe[i].name);
        
        printf("Run Scored: ");
        scanf("%d",&playe[i].run);
        total_run=total_run+playe[i].run;
    }
    printf("Total run of the team = %d",total_run);

    return 0;

    
}