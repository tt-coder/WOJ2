#include <stdio.h>
#include <string.h>
int main(void){
  int i,j,out[10000]={0},flag;
  char input[10000];
  while(fgets(input,sizeof(input),stdin)!=NULL){
    flag=0;
    input[strlen(input)-1]='\0';
    for(i=0;input[i]!='\0';i++){
      if(input[i]>='0' && input[i]<='9' && flag==0){
        flag=1;
        sscanf(input,"%d",&out[j]);
        j++;
        if(input[i+1]>='0' && input[i+1]<='9'){
          i++;
        }
      }else if((input[i]>='0' && input[i]<='9' && flag==1)||((input[i]<'0'||input[i]>'9') && input[i]!=' ')){
        fprintf(stderr,"%s\n",input);
        if(flag==1){
          j--;
          out[j]=0;
        }
        break;
      }
    }
    if(flag==0){
      fprintf(stderr,"%s\n",input);
    }
  }
  for(i=0;out[i]!=0;i++){
    printf("%d\n",out[i]);
  }
  return 0;
}
