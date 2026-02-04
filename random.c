/*random.c*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//add a max limit
int random_f(int max){
 int x;
 x = rand() % max + 1;

 return x;
}

int main(){

//use getpid to have the id of the current process, which is diffrent every time
//to solve the issue with rand function resulting the same number 
 
 srand(getpid());

 int random;

 random = random_f(10);
 printf("%d\n", random);
 random = random_f(50);
 printf("%d\n", random);

 return 0;
}
