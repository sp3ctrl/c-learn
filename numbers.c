/*numbers.c reads numeric imput from user*/

#include <stdio.h>

int main () {
    int x, y, result;

    printf("Please input a number:\n");
    scanf("%d", &x);

    printf("Please input another number:\n");
    scanf("%d", &y);

    result = x + y;
    
    printf("The result is %d\n", result);

    return 0;
    
}
