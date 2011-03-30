#include <stdio.h>
#include <string.h>

int main(void){

  char a[20], b[20];
  int i,j,m;
  char moji1[20] = "abcde";
  char moji2[20] = "vwxyz";
  strcpy(a,moji1);
  strcpy(b,moji2);

  printf("文字列a = %s\n",a);
  printf("文字列b = %s\n",b);

  i = strlen(a);
  j = strlen(b);
  
  if(strcmp(a,b)== 0){
      printf("文字列a,bは等しい\n");
  }else{
    if(strcmp(a,b) > 0){
	printf("文字列aはbより大\n");
      }else{
        printf("文字列aはbより小\n");
      }
  }
    strcat(a,b);
    m = strlen(a);
    printf("文字列a =%s\n",a);
    printf("文字列aの長さ = %d\n",m);

  return 0;

}
