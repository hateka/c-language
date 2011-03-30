#include <stdio.h>

int main(void){

  int i,j;
  char str[10][2] = {
    {67,1},{43,1},{56,1},
    {97,1},{30,1},{88,1},
    {76,1},{55,1},{66,1},
    {78,1}
  };

  for(i = 0; i<10;i++){
    for(j = 0; j<10;j++){
      if(str[i][0]<str[j][0]){
        str[i][1]++;
        printf("%d  %d\n",str[i][0],str[j][0]);
      }
    }   
  }

  puts("点数  順位");
  for(i = 0;i<10;i++){
    printf("%3d   %2d\n",str[i][0],str[i][1]);
  }

return 0;

}
