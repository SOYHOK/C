#include <stdio.h>
int main (){
    char Char;
    printf("Enter a character : ");
    scanf("%c", &Char);
    if ((Char >= 'a' && Char <= 'z') || (Char >= 'A' && Char <= 'Z') )
    {  printf(" The entered character %c is an alphabet.", Char );
    }
    else{
        printf(" The entered character %c is a special character.", Char);

    }
    return 0;
    }