#include <stdio.h>
#include <string.h>
#include <cs50.h>

typedef struct
{
    string name;
    int votes;

}
candidates;

int main(int argc, string argv[]){
    // CHECK IF CANDIDATES AMOUNT IS NOT EXCEEDED
    if (argc > 10){
        printf("Too many candidates! \n");
        return 1;
    }
    int participants = argc-1;
    // printf("================= \n");
    candidates candidate [participants];
    for (int i = 0; i < participants; i++)
    {
        candidate[i].name = argv[i+1];
        candidate[i].votes = 0;
        // printf("Candidate %d: %s\n",i+1, candidate[i].name);
    }
    // printf("================= \n");
    int voters = get_int("Number of voters: ");
    //VOTE
        for (int i=0; i < voters; i++){
            int valid_vote = 1;
            string s = get_string("Vote: ");
            for(int j=0;j<participants;j++){
                if (strcmp(s,candidate[j].name)==0){
                candidate[j].votes++;
                // printf("Vote computed!\n");
                valid_vote = 0;
                }
            }
            if (valid_vote == 1){
                // printf("Invalid vote!\n");
                valid_vote = 0;
                i--;
            }
        }
    // DEFINE WINNER
    int winner = 0;
    for (int i = 0; i < participants; i++)
    {
        if(candidate[i].votes > winner){
            winner = candidate[i].votes;
        }
    }
    // PRINT WINNER
    // printf("Winner(s): \n");
    for (int i = 0; i < participants; i++)
    {
        if(candidate[i].votes == winner){
            // printf("- Candidate %s with %d votes! \n",candidate[i].name,candidate[i].votes);
            printf("%s\n",candidate[i].name);
        }
    }
    // printf("Thanks for participating!\n");
}





