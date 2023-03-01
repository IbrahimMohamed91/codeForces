/*
* Anton likes to play chess, and so does his friend Danik.
* Once they have played n games in a row.
* For each game it's known who was the winner — Anton or Danik.
* None of the games ended with a tie.
* Now Anton wonders, who won more games, he or Danik? Help him determine this.
* date: 01/03/2023
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_CHESS_GAMES 100000

int main()
{
    unsigned long playedGames, antonCounter = 0, danikCounter = 0;
    char gameOutcome[MAX_CHESS_GAMES];

    // enter the number of games played
    scanf("%lu", &playedGames);
    // enter the string contains the outcome of each game
    scanf("%s", gameOutcome);

    while(playedGames > 0){
        if(*(gameOutcome+playedGames-1) == 'A'){
            antonCounter++;
        }
        else if(*(gameOutcome+playedGames-1) == 'D'){
            danikCounter++;
        }
        playedGames--;
    }

    if(antonCounter > danikCounter){
        printf("Anton");
    }
    else if(antonCounter < danikCounter){
        printf("Danik");
    }
    else{
        printf("Friendship");
    }
    return 0;
}
