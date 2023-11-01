#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include "source.h"
#include <string.h>
#define LENGTH 12


int main(void) {
	printf("hello");
	shoot("ROCK", "Paper");
	return 0;
}

char shoot(char p1[], char p2[]) {
	char output[LENGTH] = { "Invalid" };
	char pl1[] = { "Player 1" }, pl2[] = { "Player 2" }, tie[] = { "Draw" };
	for (int i = 0; i < strlen(p1); i++)
	{
		p1[i] = tolower(p1[i]);
	}
	for (int i = 0; i < strlen(p2); i++)
	{
		p2[i] = tolower(p2[i]);
	}
	if (p1 == "rock")
	{
		if (p2 == "rock")
		{
			strncpy(output, tie, LENGTH);
			return(*output);
		}
		if (p2 == "paper")
		{
			strncpy(output, pl2, LENGTH);
			return(*output);
		}
		if (p2 == "scissor")
		{
			strncpy(output, pl1, LENGTH);
			return(*output);
		}
	}
	if (p1 == "paper")
	{
		if (p2 == "rock")
		{
			strncpy(output, pl1, LENGTH);
			return(*output);
		}
		if (p2 == "paper")
		{
			strncpy(output, tie, LENGTH);
			return(*output);
		}
		if (p2 == "scissor")
		{
			strncpy(output, pl2, LENGTH);
			return(*output);
		}
	}
	if (p1 == "scissor")
	{
		if (p2 == "rock")
		{
			strncpy(output, pl2, LENGTH);
			return(*output);
		}
		if (p2 == "paper")
		{
			strncpy(output, pl1, LENGTH);
			return(*output);
		}
		if (p2 == "scissor")
		{
			strncpy(output, tie, LENGTH);
			return(*output);
		}
	}
	return(*output);
}