/*dice.c*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int random_num(int max){
 int x;
 x = rand() % max + 1;
 return x;
}


int main(){

 int balance, bet, guess, dice, win;
 balance = 1000;
 win = 0;
 srand(getpid());
  
 while (balance != 0) 
 {
  printf("Make a bet: \n");
  scanf("%d", &bet);
   
  printf("Guess the dice! Enter one number from 1 to 6 (0 to quit):\n");
  scanf("%d", &guess);
   
  if (guess == 0)
  { printf("Your balance is: $%d\n", balance);
    printf("Thanks for playing, bye!");
    return 0;
  }

  printf("Throwing the dice...\n");

  sleep(2);

  dice = random_num(6);
  printf("%d\n", dice);

  if (guess != dice) 
  { printf("You lost, try again.\n");
    balance = balance - bet;
    printf("Your balance is now: $%d\n", balance);
  } 
  else 
  { printf("You win!\n");
    win = bet * 3; 
    balance = balance + win;
    printf("Your balance is now: $%d\n", balance);
  }

 }

 printf("You're out of money, bye");
 
 return 0;
}
