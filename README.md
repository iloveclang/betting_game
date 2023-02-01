# betting_game
Some guy on reddit wanted his homework done, and I was bored. He has no idea.

Initial task:
> The task is to create a small game where the player (i.e. the user) starts with $100 and makes a number of bets on slots.
>
> The player starts by betting a number of crowns within their budget and then chooses to bet either heads or tails for the next coin toss. Once the player has made their bet, the program will simulate a coin toss and present the result to the player. If the player guessed correctly, the player wins as much money as he or she bet, otherwise the same amount is lost.
>
> The player can quit the game at any time by betting 0kr. If the player ends the game in this way, the program will present the amount of money the player ended with. The game is also ended if the player runs out of money. Below is an example of how the program is supposed to work with preferably the programs ”getPlayerBet ()” ”main ()” ”tossCoin”:
>
> You have 100 dollars. How much do you want to bet? 50 What do you want to bet on? 1 for heads, 0 for tails: 0 Tossing coin… it is heads! Sorry you lost 50 dollars. You have 50 dollars. How much do you want to bet? 25 What do you want to bet on? 1 for heads, 0 for tails: 1 Tossing coin… it is heads! Congratulations you won 25 dollars. You have 75 dollars. How much do you want to bet? 75 What do you want to bet on? 1 for heads, 0 for tails: 1 Tossing coin… it is tails! Sorry you lost 75 dollars. Game over! You have no more money!

compile with `gcc main.c` 
run with `./a.out` 
exit by passing `0` as the amount, or `Ctrl-C`
