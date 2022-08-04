#include <stdio.h>  
#include <math.h>
int main (){
  // define variable
  float Weight, Height;
  // Ask user to enter weight and height
  printf("Enter your Weight: ");// in kilogram
  scanf("%f",&Weight);
  printf("Enter your Height: ");// in meters
  scanf("%f",&Height);
  float BMI= Weight/(pow(Height,2));
  printf("BMI=%.2f",BMI);
  if (BMI<18.5){
    printf(" Underweight");
  }
  else if (BMI>=18.5&&BMI<=24.9){
    printf(" Normal");
  }
  else if (BMI>=25.0&&BMI<=29.9){
    printf(" Overweight");
    }
  else {
    printf(" Obese");
  }
  return 0;
    }