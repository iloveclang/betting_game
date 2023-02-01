#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CURRENCY			"kr"
#define START_AMOUNT		100
#define INPUT_BUFFER_SIZE	100

int main(void) {
	int money = START_AMOUNT;
	char buffer[INPUT_BUFFER_SIZE];
	int len, num, coin, toss;
	
	while (money > 0) {
		printf(	"You have %d %s.\n\n"
				"How much do you want to bet?\n\n> ", 
				money, CURRENCY);
		
		fgets(buffer, INPUT_BUFFER_SIZE, stdin);
		len = strlen(buffer);
		if (len <= 1) {
			printf("Input too short!\n\n");
			continue;
		}
		else if (len == 2 && buffer[0] == '0') {
			puts("OK, BYE, I didn't even want you to continue playing...");
			return 0;
		}
		else {
			buffer[len - 1] = '\0';	// removing dumbass newline from fgets
		}
		
		num = atoi(buffer);	// since 0 is handled, this works
		if (num == 0) {
			printf("Input not a valid number!\n\n");
			continue;
		}
		
		if (num > money) {
			printf("You can't bet more money than you have!\n\n");
			continue;
		}
		
		if (num < 0) {
			printf("You can't bet negative money!\n\n");
			continue;
		}
		
		printf(	"What do you want to bet on?\n"
				"(1 for heads, 0 for tails):\n\n> ");
		
		fgets(buffer, INPUT_BUFFER_SIZE, stdin);
		len = strlen(buffer);
		if (len != 2) {
			printf("Input must be 0 or 1!\n\n");
			continue;
		}
		else {
			if (buffer[0] == '0') {
				coin = 0;
			}
			else if (buffer[0] == '1') {
				coin = 1;
			}
			else {
				printf("Input not a valid number!\n\n");
				continue;
			}
		}
		
		printf("Tossing coin...");
		toss = rand() % 2;
		if(toss) {	// if 1
			printf("it's heads!\n\n");
		}
		else {
			printf("it's tails!\n\n");
		}
		
		if (coin == toss) {
			printf("Congratulations you won %d %s\n\n", num, CURRENCY);
			money += num;
		}
		else {
			printf("Sorry you lost %d %s\n\n", num, CURRENCY);
			money -= num;
		}
	}
	
	puts("Game over! You have no more money!");
	return 0;
}
