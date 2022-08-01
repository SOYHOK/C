#include <stdio.h>
int main(){
int X;
// enter a number by user
printf("Enter a number: ");
scanf("%d", &X);
// display a message 
if (X < 10){
    printf("Too low");
}
else if ( X < 20) {
    printf("Correct");
}
else {
    printf("Too high");
}   
  return 0;
}