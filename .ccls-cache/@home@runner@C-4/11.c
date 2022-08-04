#include <stdio.h>
#include <math.h>

int main() {
  printf("ax^2 + bx + c = 0");
  float a,b,c;
  printf("\nEnter a:");
  scanf("%f",&a);
  printf("\nEnter b:");
  scanf("%f",&b);
  printf("\nEnter c:");
  scanf("%f",&c);
  float dis = pow(b,2)-4*a*c; //dis = discriminant
  if (dis>0){
    float r1 = (-b + sqrt(dis))/2*a;
    float r2 = (-b - sqrt(dis))/2*a;
    printf("root1=%f, root2=%f", r1,r2);
  }
  else if(dis == 0){
    float r = -b/2*a;
    printf("root=%f",r);
  }
  else if (dis<0)
    printf("no root");
  return 0;
}