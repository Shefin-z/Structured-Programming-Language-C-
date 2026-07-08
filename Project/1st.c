#include<stdio.h>
#include <limits.h>
struct Player
{
    char player_name[50];
    int player_number;
    char player_position[3];
    int goals_scored;
    int goals_conceded;
    int number_of_minutes_played;
};
struct Team
{
    char team_name[50];
    struct Player players[20];
    int num_players;
};
void addPlayerToTeam(struct Team *team, struct Player new_player)
{
    if (team->num_players < 20)
    {
        team->players[team->num_players++] = new_player;
        printf("Player added to the team successfully.\n");
    }
    else
    {
        printf("Cannot add more players. Team is full.\n");
    }
}

void updateTeam(struct Team *team, int player_index, int goals_scored, int goals_conceded)
{
    if (player_index >= 0 && player_index < team->num_players)
        {
        if (strcmp(team->players[player_index].player_position, "MID") == 0 ||
            strcmp(team->players[player_index].player_position, "FWD") == 0)
            {
              team->players[player_index].goals_scored += goals_scored;
            }
        else if (strcmp(team->players[player_index].player_position, "DEF") == 0)
            {
              team->players[player_index].goals_conceded += goals_conceded;
            }
         printf("Team stats updated successfully.\n");
        }
        else
        {
          printf("Invalid player index.\n");
        }
}

void displayPlayer(struct Player player)
{
    printf("Player Name: %s\n", player.player_name);
    printf("Player Number: %d\n", player.player_number);
    printf("Player Position: %s\n", player.player_position);
    printf("Goals Scored: %d\n", player.goals_scored);
    printf("Goals Conceded: %d\n", player.goals_conceded);
    printf("Number of Minutes Played: %d\n", player.number_of_minutes_played);
}

void displayTeam(struct Team team)
{
    printf("Team Name: %s\n", team.team_name);
    printf("Number of Players: %d\n", team.num_players);
    printf("Players:\n");
    for (int i = 0; i < team.num_players; ++i)
    {
        printf("Player %d:\n", i + 1);
        displayPlayer(team.players[i]);
    }
}

void saveTeamsToFile(struct Team *teams, int num_teams)
{
    FILE *file = fopen("football_database.txt", "w");

        for (int i = 0; i < num_teams; ++i)
        {
            fprintf(file, "%s\n", teams[i].team_name);
            fprintf(file, "%d\n", teams[i].num_players);
            for (int j = 0; j < teams[i].num_players; ++j)
            {
                fprintf(file, "%s %d %s %d %d %d\n", teams[i].players[j].player_name,
                                                    teams[i].players[j].player_number,
                                                    teams[i].players[j].player_position,
                                                    teams[i].players[j].goals_scored,
                                                    teams[i].players[j].goals_conceded,
                                                    teams[i].players[j].number_of_minutes_played);
            }
        }
        fclose(file);
        printf("Teams saved to file successfully.\n");


}

void loadTeamsFromFile(struct Team *teams, int *num_teams)
{
    FILE *file = fopen("football_database.txt", "r");

        *num_teams = 0;
        while (fscanf(file, "%s", teams[*num_teams].team_name) == 1)
        {
            fscanf(file, "%d", &teams[*num_teams].num_players);
            for (int i = 0; i < teams[*num_teams].num_players; ++i)
            {
                fscanf(file, "%s %d %s %d %d %d", teams[*num_teams].players[i].player_name,
                                                  &teams[*num_teams].players[i].player_number,
                                                  teams[*num_teams].players[i].player_position,
                                                  &teams[*num_teams].players[i].goals_scored,
                                                  &teams[*num_teams].players[i].goals_conceded,
                                                  &teams[*num_teams].players[i].number_of_minutes_played);
            }
            (*num_teams)++;
        }
        fclose(file);
        printf("Teams loaded from file successfully.\n");

}

void displayStatistics(struct Team *teams, int num_teams)
{
    FILE *file = fopen("stats.txt", "w");

        int max_goals = 0, min_goals_conceded =INT_MAX;
        char max_goals_team[50], min_goals_conceded_team[50];
        for (int i = 0; i < num_teams; ++i)
        {
            for (int j = 0; j < teams[i].num_players; ++j)
            {
                if (teams[i].players[j].goals_scored > max_goals)
                {
                    max_goals = teams[i].players[j].goals_scored;
                    strcpy(max_goals_team, teams[i].team_name);
                }
                if (teams[i].players[j].goals_conceded < min_goals_conceded)
                {
                    min_goals_conceded = teams[i].players[j].goals_conceded;
                    strcpy(min_goals_conceded_team, teams[i].team_name);
                }
            }
        }
        fprintf(file, "Most goals scored: %s (%d goals)\n", max_goals_team, max_goals);
        fprintf(file, "Least goals conceded: %s (%d goals)\n", min_goals_conceded_team, min_goals_conceded);
        fclose(file);
        printf("Statistics saved to file successfully.\n");


}
int main() {
    struct Team teams[10];
    int num_teams = 0;


    loadTeamsFromFile(teams, &num_teams);

    int choice;
    do {
        printf("\nFootball Database Management System\n");
        printf("1. Add Player to Team\n");
        printf("2. Update Team Stats\n");
        printf("3. Display Player Information\n");
        printf("4. Display Team Information\n");
        printf("5. Save Teams to File\n");
        printf("6. View Statistics\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {

                struct Player new_player;
                printf("Enter player name: ");
                scanf("%s", new_player.player_name);
                printf("Enter player number: ");
                scanf("%d", &new_player.player_number);
                printf("Enter player position: ");
                scanf("%s", new_player.player_position);
                printf("Enter goals scored: ");
                scanf("%d", &new_player.goals_scored);
                printf("Enter goals conceded: ");
                scanf("%d", &new_player.goals_conceded);
                printf("Enter number of minutes played: ");
                scanf("%d", &new_player.number_of_minutes_played);

                printf("Enter team index (0-%d): ", num_teams - 1);
                int team_index;
                scanf("%d", &team_index);

                addPlayerToTeam(&teams[team_index], new_player);
                break;
            }
            case 2: {

                int team_index, player_index, goals_scored, goals_conceded;
                printf("Enter team index (0-%d): ", num_teams - 1);
                scanf("%d", &team_index);
                printf("Enter player index (0-%d): ", teams[team_index].num_players - 1);
                scanf("%d", &player_index);
                printf("Enter goals scored: ");
                scanf("%d", &goals_scored);
                printf("Enter goals conceded: ");
                scanf("%d", &goals_conceded);

                updateTeam(&teams[team_index], player_index, goals_scored, goals_conceded);
                break;
            }
            case 3: {

                int team_index, player_index;
                printf("Enter team index (0-%d): ", num_teams - 1);
                scanf("%d", &team_index);
                printf("Enter player index (0-%d): ", teams[team_index].num_players - 1);
                scanf("%d", &player_index);

                displayPlayer(teams[team_index].players[player_index]);
                break;
            }
            case 4: {

                int team_index;
                printf("Enter team index (0-%d): ", num_teams - 1);
                scanf("%d", &team_index);

                displayTeam(teams[team_index]);
                break;
            }
            case 5: {

                saveTeamsToFile(teams, num_teams);
                break;
            }
            case 6: {

                displayStatistics(teams, num_teams);
                break;
            }
            case 7: {

                printf("Exiting...\n");
                break;
            }
            default: {
                printf("Invalid choice. Please try again.\n");
                break;
            }
        }
    } while (choice != 7);

    return 0;
}
