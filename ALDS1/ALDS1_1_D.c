#include<stdio.h>
#include <math.h>

int main(){
  int i,j,n;
  long maxV,minV=0;
  long R[200000];
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%ld", &R[i]);
  }
  maxV=R[1]-R[0];
  minV=R[0];

  for(j=1;j<n;j++){
    if(maxV<R[j]-minV) maxV=R[j]-minV;
    if(minV>R[j]) minV=R[j];
  }
  // printf("min:%d\n",minV);
  // printf("max:%d\n",maxV);
  // printf("dif:%d\n",difV);
  printf("%d\n",maxV);

  return 0;
}
