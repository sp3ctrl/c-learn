/*triangle.c*/

#include <stdio.h>

int area_triangle(int b, int h){
 int area;
 area = (b * h) / 2;
 return area;

}


int main(){

 int base, height, area;

 printf("Base:");
 fflush(stdout);
 scanf("%d", &base);

 printf("Height:");
 fflush(stdout);
 scanf("%d", &height);
 
 area = area_triangle(base, height);
 printf("The area is %d\n", area);
 
 printf("Work well done!");

 return 0;
}



