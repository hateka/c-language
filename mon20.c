#include <stdio.h>
#include <math.h>

int main(void){

  double i,j,a,b,c;
  printf("x sin(x) cos(x) tan(x)\n");
  for(i = 0.0;i<=180.0;i = i+15.00){
    j = i * 3.14159 / 180.0;
    a = sin(j);
    b = cos(j);
    c = tan(j);
    printf("%6.2f %12.5f %12.5f %12.5f\n",i,a,b,c);
  }
  return 0;
}
