#include<stdio.h>

int arr[][3] = {

  {1,1,1},
  {2,4,8},
  {3,6,9},
  {4,16,64},
  {5,25,125},
  {6,36,216},
  {7,49,343},
  {8,64,512},
  {9,81,729},
  {10,100,1000}

};

int num;
int i;

int main(void){
  
  printf("値をいれて");
  scanf("%d",&num);

  for(i=0;i<10;i++){
    if(arr[i][2]==num){
      printf("２乗値は%dです\n",arr[i][1]);
      printf("３乗値は%dです",arr[i][2]);
    }
  }

  return 0;
}
