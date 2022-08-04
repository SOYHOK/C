#include <stdio.h>
#include <math.h>
// Ask user to enter the weight in kilogram 
int main(){
  // 1 kilogram = 2.204 pound
  float Weight_in_kilogram;
  printf(" Enter your weight: \n");
  scanf("%f",&Weight_in_kilogram );
  float Weight= Weight_in_kilogram * 2.204;
  printf("Weight=%.2f kilogram", Weight);

  return 0;
}