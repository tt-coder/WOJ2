#include <stdio.h>
#include <math.h>
int main(void){
  int a,b,c;
  int A[10000],B[10000];
  int i=0,j,k,v,count=0,tmp,temp;
  double p,S;
  while((scanf("%d %d %d",&a,&b,&c))!=EOF){
    if(a>b){
      temp=a;
      a=b;
      b=temp;
    }
    if(b>c){
      temp=b;
      b=c;
      c=temp;
    }
    if(a>b){
      temp=a;
      a=b;
      b=temp;
    }
    if(c<(a+b)){
      p = (a + b + c) / 2.0;
      S = sqrt(p*(p-a)*(p-b)*(p-c));
      A[i]=S;
    }else{
      A[i]=10000;
    }
    i++;
    count++;
  }
  for(i=0;i<count;i++){
    if(A[i]!=0){
      B[i]=A[i];
    }
  }
  for(i=1;i<count;i++){ //ソート                                                
    v=B[i];
    j=i-1;
    while(j>=0 && B[j]>v){
      B[j+1]=B[j];
      j--;
    }
    B[j+1]=v;
  }
  for(i=0;i<count;i++){
    if(B[0]==A[i]){
      tmp=i;
      break;
    }
  }
  printf("%d\n", tmp+1);
  return 0;
}
