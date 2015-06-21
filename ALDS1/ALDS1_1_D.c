#include<stdio.h>
#include <math.h>

int main(){
  int i,j,n;
  long maxV,minV,difV=0;
  long R[200000];
  scanf("%d", &n);

  for(i=0;i<n;i++){
    scanf("%ld", &R[i+1]);
    if(i==0){
      minV=R[i+1];
      maxV=R[i+1];
    }else{
      if(i!=n-1){
        if(minV!=isminV(minV,R[i+1])){
          minV=isminV(minV,R[i+1]);
          maxV=minV;
        }
      }
      if(maxV!=ismaxV(maxV,R[i+1])){
        maxV=ismaxV(maxV,R[i+1]);
        difV=ismaxV(difV,maxV-minV);
      }
      if(i==1)difV=R[i+1]-R[i];
    }
  }
  // printf("min:%d\n",minV);
  // printf("max:%d\n",maxV);
  // printf("dif:%d\n",difV);
  if(difV<0){
    printf("%d\n",difV);
  }else{
    printf("%d\n",ismaxV(difV,maxV-minV));
  }
  return 0;
}

isminV(long a,long b){
  if(a<b)return a;
  else return b;
}
ismaxV(long a,long b){
  if(a<b)return b;
  else return a;
}
