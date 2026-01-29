/*float.c*/
#include <stdio.h>

int main(){

  // area = radius * radius * PI
  float pi, area, radius;
  pi = 3.14;
  printf("Welcome to area of circle calculator.\nEnter radius:\n");
  scanf("%f", &radius);
  area = radius * radius * pi;
  printf("Area: %f\n", area); 
  


  return 0;

}

