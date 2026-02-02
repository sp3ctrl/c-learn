/*random.c*/

#include <stdio.h>

int random_f(){
 int x;
 x = rand();
 
 return x;
}

int main(){
 int random;
 random = random_f();
 printf("%d", &random);

 return 0;
}
