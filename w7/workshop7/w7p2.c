/*
*****************************************************************************
						  Workshop - #7 (P1)
Full Name  : Naiba Shabanova
Student ID#: 
Email      : nshabanova@myseneca.ca
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "w7header.h"

int main(void)
{
	int catchall, rows;
	int flag = 0, i = 0, j = 0;
	/* Player Configuration */
	printf("================================\n         Treasure Hunt!\n================================\n\n");
	printf("PLAYER Configuration\n--------------------\n");
	/* Read player name */
	printf("Enter a single character to represent the player: ");
	scanf(" %c", &player.name);
	/* Read player lives, limit between 1-MAXLIVES (define in header), limit no other input other than int */
	do {
		printf("Set the number of lives: ");
		scanf("%d", &player.lives);
		if (player.lives < 1 || player.lives > MAXLIVES) {
			printf("     Must be between 1 and %d!\n", MAXLIVES);
			while ((catchall = getchar()) != '\n' && catchall != EOF) {}/* Clean up the buffer */
			flag = 1;
		}
		else
			flag = 0;
	} while (flag != 0);
	/* Rest play past positions array */
	player.pastPositions[MAXPATH] = 0;
	printf("Player configuration set-up is complete\n\n");
	
	/* Game Configuration */
	printf("GAME Configuration\n------------------\n");
	/* Read path lenght, limit between MINPATH, MAXPATH and must be a multiple of MULTIOFPATH (define in header) */
	do {
		printf("Set the path length (a multiple of %d between %d-%d): ", MULTIOFPATH, MINPATH, MAXPATH);
		scanf(" %d", &game.pathLength);
		if (game.pathLength < MINPATH || game.pathLength > MAXPATH || ((game.pathLength % MULTIOFPATH) != 0)) {
			printf("     Must be a multiple of %d and between %d-%d!!!\n", MULTIOFPATH, MINPATH, MAXPATH);
			while ((catchall = getchar()) != '\n' && catchall != EOF) {}/* Clean up the buffer */
			flag = 1;
		}
		else
			flag = 0;
	} while (flag != 0);
	/* Read max moves */
	do {
		printf("Set the limit for number of moves allowed: ");
		scanf(" %d", &game.maxMoves);
		if (game.maxMoves < player.lives || game.maxMoves > ((int)(game.pathLength*0.75))) {
			printf("    Value must be between %d and %d\n", player.lives , ((int)(game.pathLength * 0.75)));
			while ((catchall = getchar()) != '\n' && catchall != EOF) {}/* Clean up the buffer */
			flag = 1;
		}
		else
			 flag = 0;
	} while (flag != 0);
	/* Read bomb placement */
	printf("\nBOMB Placement\n--------------\nEnter the bomb positions in sets of %d where a value\nof 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n(Example: 1 0 0 1 1) NOTE: there are %d to set!\n",MULTIOFPATH,game.pathLength);
	rows = game.pathLength/MULTIOFPATH;
	for (i = 0; i < rows; i++)
	{
		printf("   Positions [%2d-%2d]: ", (MULTIOFPATH*i+1), (MULTIOFPATH*i+5));
		for (j = 0; j < MULTIOFPATH; j++)
		{
			scanf("%d", &game.bombPlacement[j+(i*5)]);
			
		}
		
	}
	printf("BOMB placement set\n");
	/* Read treasure placement */
	printf("\nTREASURE Placement\n------------------\nEnter the treasure placements in sets of %d where a value\nof 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", MULTIOFPATH, game.pathLength);
	rows = game.pathLength / MULTIOFPATH;
	for (i = 0; i < rows; i++)
	{
		printf("   Positions [%2d-%2d]: ", (MULTIOFPATH * i + 1), (MULTIOFPATH * i + 5));
		for (j = 0; j < MULTIOFPATH; j++)
		{
			scanf("%d", &game.treaPlacement[j + (i * 5)]);

		}

	}
	printf("TREASURE placement set\n\n");
	printf("GAME configuration set-up is complete...\n\n");

	/* List game config */
	printf("------------------------------------\nTREASURE HUNT Configuration Settings\n------------------------------------\n");
	printf("Player:\n");
	printf("   Symbol     : %c\n",player.name);
	printf("   Lives      : %d\n",player.lives);
	printf("   Treasure   : [ready for gameplay]\n");
	printf("   History    : [ready for gameplay]\n\n");
	printf("Game:\n");
	printf("   Path Length: %d\n", game.pathLength);
	printf("   Bombs      : ");
	for (i = 0; i < game.pathLength; i++)
	{
		printf("%d", game.bombPlacement[i]);
	}
	printf("\n");
	printf("   Treasure   : ");
	for (i = 0; i < game.pathLength; i++)
	{
		printf("%d", game.treaPlacement[i]);
	}
	printf("\n");
	printf("\n====================================\n~ Get ready to play TREASURE HUNT! ~\n====================================\n\n");
	return 0;
}
