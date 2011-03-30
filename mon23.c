#include <stdio.h>
#include <ctype.h>

int main(void){

  int ch,i;
  int alpa[26] = {0};

  printf("文字列を入力しなさい\n");
  while((ch = getchar()) !=EOF){
    if(isupper(ch)!=0){
      alpa[ch-'A']++;
    }else if(islower(ch)!=0){
      alpa[ch-'a']++;
    }
  }

  for(i =0;i<26;i++){
    printf("%c : %3d個入力\t\t",'a'+i,alpa[i]);
    if(i%3 == 2){
      putchar('\n');
    }
  }

  return 0;

}
