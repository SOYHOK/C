#include <stdio.h>
int main (){
    int X, S, TB, TH,square_area, traingle_area;
    // Ask the user to enter a number to select whether it is square or triangle.
    printf("1.Square\n2.Traingle\nEnter a number: ");
    scanf("%d", &X);
    // Display and enter the number in meter to compute the area of square.
    if( X == 1) {
        printf(" Enter the lenght of Square in meter: ");
        scanf("%d", &S);
        square_area= S*S;
        printf("The area of square: %d m2" , square_area); }
    // Display and enter the number in meter to compute the area of triangle.
    else if ( X == 2 ){
         printf("Enter the base of triangle in meter: ");
          scanf("%d",&TB);
         printf("Enter the height of triangle in meter: ");
        scanf("%d",&TH);
        traingle_area= (TB*TH)/2;
        printf(" The area of traingle: %d m2", traingle_area);}
    else { printf( "error\ntry another number again"); }
    return 0;
}