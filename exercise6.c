#include <stdio.h>

int main() {
  int num1,num2;
  printf("Enter two intergers:");
  scanf("%d%d",&num1,&num2);
  
  if(num1==num2){
    printf("result %d equal to %d",num1,num2);
    }
  else if (num1>num2){
    printf("%d greater than %d",num1,num2);
      }
  else{
    printf("%d less than %d",num1,num2);
    
  }
  return 0;
}