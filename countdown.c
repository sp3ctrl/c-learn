/*countdown.c*/
#include <stdio.h>
#include <unistd.h>

int main(){

 int min;
 min = 0;

 for (int max = 10; max > min; max--){
   printf("%d\n", max);
   sleep(1);
 }
 
 printf("The FINAL COUNTDOWWWN!");

 return 0;
}
