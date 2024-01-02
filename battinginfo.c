/*1.Write a C program to accept batting information of cricket team using FUNCTIONS. It contains player  name and runs scored by player. Calculate total runs scored by cricket team.
Example:
input:5
Gill:49
Rohit:88
Kohli:101
Surya:13
Srikar:99
output:350*/
#include <stdio.h>

int main() 
{
    int n;
    char name[50];
    int runs, totalRuns = 0;

    printf("Enter the number of players: ");
    scanf("%d", &n);

    printf("Enter batting information for %d players:\n", n);

    for (int i = 0; i < n; ++i) 
    {
        printf("Enter player's name: ");
        scanf("%s", name);

        printf("Enter runs scored by %s: ", name);
        scanf("%d", &runs);
        totalRuns += runs;
    }
    printf("Total runs scored by the cricket team: %d\n", totalRuns);

    return 0;
}
