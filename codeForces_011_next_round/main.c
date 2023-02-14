#include <stdio.h>
#include <stdlib.h>

#define MAX_PARTICIPANTS_NUMBER 51

int main()
{
    int totalParticipants, kthPlace, kthPlaceScore = 1, participantsCounter = 0, nextRoundCounter = 0, scores[MAX_PARTICIPANTS_NUMBER];
    //printf("Enter the total number of participants and the k-th place: ");
    scanf("%d %d", &totalParticipants, &kthPlace);

    while(participantsCounter < totalParticipants){
        scanf("%d", scores+participantsCounter);

        if(participantsCounter+1 == kthPlace){
            kthPlaceScore = scores[participantsCounter];
            if(kthPlaceScore == 0){
                kthPlaceScore = 1;
            }
        }
        if(scores[participantsCounter] >= kthPlaceScore){
            nextRoundCounter++;
        }
        participantsCounter++;
    }

    printf("%d\n", nextRoundCounter);
    return 0;
}
