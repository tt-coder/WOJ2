#include <stdio.h>
#include <string.h>
int main(void){
  char word[100][100],*x[100],*t;
  int i,j,count=0;
  while((scanf("%s",word[i]))!=EOF){
    *word[i]=tolower(*word[i]);
    x[i]=word[i];
    i++;
    count++;
  }
  for(i=0;i<count;i++){
    for(j=i+1;j<count;j++){
      if((strcmp(x[i],x[j]))>0){
        t=x[j];
        x[j]=x[i];
        x[i]=t;
      }
    }
  }
  printf("%s",x[0]);
  return 0;
}
