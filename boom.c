/*boom.c*/

#include <stdio.h>

//loop with counter from 10 to 0, print boom when it ends

int main(){

 int top, bottom, counter;

 top = 10;
 bottom = 0;
 counter = top;


 while (counter != bottom){
   printf("%d\n", counter);
   counter = counter - 1;
 }
 
 printf("BOOM!\n");




 return 0;

}
