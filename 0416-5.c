#include <stdio.h>
int main(void){
  int count=0;
  int flag1=0,flag2=0,flag3=0;
  char input;
  while((input=getchar())!=EOF){
    if(input=='/' && flag1==0 && flag2==0){
      flag1=1;
    }else if(flag1==1 && flag2==0){
      flag1=0;
      if(input=='*'){
        flag2=1;
      }
    }else if(input=='*' && flag2==1){
      flag3=1;
    }else if(flag3==1){
      flag3=0;
      if(input=='/'){
        flag2=0;
        flag1=0;
        count++;
      }
    }
  }
  printf("%d",count);
  return 0;
}
