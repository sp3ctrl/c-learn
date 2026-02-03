/*sleep.c*/
#include <stdio.h>
#include <unistd.h>

int main(){

 printf("Wait while processing..");
 fflush(stdout);
 sleep(5); //seconds
 printf("OK, Well done!");
 

 return 0;
}
