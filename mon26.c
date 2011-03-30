#include <stdio.h>

#define NINZU 5
#define KAMOKU 4

int main(void){

  int no[NINZU] = {1001,1002,1003,1004,1005};
  int ten[NINZU][KAMOKU] = {
    {85,74,63,90},
    {78,65,70,62},
    {89,92,88,76},
    {32,48,66,25},
    {92,76,81,98}
  };

  double av[NINZU] = {0.0 ,0.0, 0.0, 0.0, 0.0};
  char hyoka[NINZU];
  int i,j;

  printf("番号　国語　数学　理科　社会　　平均　　評価\n");
  for(i =0;i<NINZU;i++){
    for(j=0;j<KAMOKU;j++){
      av[i]+= ten[i][j];
    }
    av[i] = av[i]/KAMOKU;

    if(av[i]<60.0){
      hyoka[i] = 'D';
    }else if(av[i]<70.0){
      hyoka[i] = 'C';
    }else if(av[i]<80.0){
      hyoka[i] = 'B';
    }else{
      hyoka[i] = 'A';
    }
  }
 
  for(i = 0;i<NINZU;i++){
    printf("%d  %d  %d  %d  %d  %8.2f  %c\n",no[i],ten[i][0],ten[i][1],ten[i][2],ten[i][3],av[i],hyoka[i]);
  }

  return 0;
}
