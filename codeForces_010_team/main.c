#include <stdio.h>
#include <stdlib.h>

#define TEAM_MEMBERS 3
#define IMPLEMENT_CONDITION 2
#define SURE 1

int main()
{
    int problemsNumber, sureAboutSolution[TEAM_MEMBERS], problemsCounter = 0, implementedProblems = 0, membersCounter, opinions;

    //printf("Enter the number of problems: ");
    scanf("%d", &problemsNumber);

    while(problemsCounter < problemsNumber){
        membersCounter = 0;
        opinions = 0;
        scanf("%d %d %d", &sureAboutSolution[membersCounter], &sureAboutSolution[membersCounter+1], &sureAboutSolution[membersCounter+2]);
        while(membersCounter < TEAM_MEMBERS){
                if(sureAboutSolution[membersCounter] == SURE){
                    opinions++;
                }
                membersCounter++;
        }
        if(opinions >= IMPLEMENT_CONDITION){
            implementedProblems++;
        }
        problemsCounter++;
    }

    printf("%d\n", implementedProblems);
    return 0;
}
