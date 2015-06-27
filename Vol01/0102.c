#include<stdio.h>
int main(){
  int n,i,j;
  //format*
  int cel[11]={0},ttl[11]={0};
  scanf("%ld\n", &n);
  while (n != 0){
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        scanf("%d", &cel[j]);
      // }
      // for(j=0;j<n;j++){
        printf("%5d", cel[j]);
        cel[n]+=cel[j];ttl[j]+=cel[j];
        ttl[n]+=cel[j];cel[j]=0;
      }
      printf("%5d\n", cel[n]);cel[n]=0;
    }
    //total
    for(i=0;i<n;i++){
      printf("%5d", ttl[i]);ttl[i]=0;
    }
    printf("%5d\n", ttl[n]);ttl[n]=0;
    scanf("%d", &n);
  }
  return 0;
}
