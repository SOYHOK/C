#include <stdio.h>
#include <math.h>
int main(){
  int Old_population= 312032486;
  int Born = (3600/6) * 24* 365;
  int Death= (3600/15)* 24 *365;
  int Immigrant= (3600/45)* 24 *365;
  int population= (Born + Immigrant - Death)*5 + Old_population;
  printf(" population=%d",population);
  return 0;
  
}
